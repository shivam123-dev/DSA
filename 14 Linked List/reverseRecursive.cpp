#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int val):data(val), next(NULL){}
};
void insertLL(Node* &head, int data){
    Node* n = new Node(data);
    if(head == NULL){
        head = n;
        return;
    }
    Node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;
}
void displayLL(Node* head){
    Node* temp = head;
    while(temp){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
Node* reverseLL(Node* &head){
    // base case
    if(head==NULL || head->next==NULL){
        return head;
    }
    // recursive case
    Node* newHead = reverseLL(head->next);
    head->next->next = head;
    head->next = NULL;
    return newHead;
}
int main(){
    Node* head = NULL;
    insertLL(head, 1);
    insertLL(head, 2);
    insertLL(head, 3);
    insertLL(head, 4);
    cout << "Given LL" << endl;
    displayLL(head);
    cout << "Reversed LL" << endl;
    Node* newHead = reverseLL(head);
    displayLL(newHead);
    return 0;
}