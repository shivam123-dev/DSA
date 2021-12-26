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
void insertLL(node* &head, int val){
    node* n = new node(val);
    if(!head){
        head = n;
    }
    else{
        node* temp = head;
        n->next = temp;
        head = n;
    }
}
node* reverseLL(node* &head){
    node* prevPtr = NULL;
    node* currPtr = head;
    node* nextPtr;
    while(currPtr!=NULL){
        nextPtr = currPtr->next;
        currPtr->next = prevPtr;
        prevPtr = currPtr;
        currPtr = nextPtr;
    }
    return prevPtr;
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
    insertLL(head, 4);
    insertLL(head, 3);
    insertLL(head, 2);
    insertLL(head, 1);
    cout << "Given LL" << endl;
    displayLL(head);
    head = reverseLL(head);
    cout << "Reversed LL" << endl;
    displayLL(head);
    return 0;
}