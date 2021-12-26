#include<iostream>
using namespace std;
class node{
public:
    int data;
    node* next;
    node(int d):data(d), next(NULL){}
};
void insertLL(node* &head, int val){
    node* n = new node(val);
    if(!head){
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
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
node* reverseKnodes(node* &head, int k){
    int count=0;
    node* prevPtr = NULL;
    node* currPtr = head;
    node* nextPtr;
    while(currPtr!=NULL and count < k){
        nextPtr = currPtr->next;
        currPtr->next = prevPtr;
        prevPtr = currPtr;
        currPtr = nextPtr;
        count++;
    }
    if(nextPtr!=NULL){
        head->next = reverseKnodes(nextPtr, k);
    }
    return prevPtr;
}
int main(void){
    node* head = NULL;
    insertLL(head, 1);
    insertLL(head, 2);
    insertLL(head, 3);
    insertLL(head, 4);
    insertLL(head, 5);
    insertLL(head, 6);
    displayLL(head);
    int k;
    cin>>k;
    node *newHead = reverseKnodes(head, k);
    displayLL(newHead);
}