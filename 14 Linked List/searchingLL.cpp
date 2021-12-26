// Searching in Linked List
#include<iostream>
using namespace std;
class node{
public:
    int data;
    node* next;
    node(int d){
        data = d;
        next = NULL;
    }
};
void insertLL(node* &head, int val){
    node* n = new node(val);
    if(head == NULL){
        head = n;
        return;
    }
    node* temp = head;
    n->next = temp;
    head = n;
}
bool searchLL(node* head, int val){
    node* temp = head;
    while(temp!=NULL){
        if(temp->data == val){
            return true;
        }
        temp = temp->next;
    }
    return false;
}
int main(){
    node* head = NULL;
    insertLL(head, 1);
    insertLL(head, 2);
    insertLL(head, 3);
    insertLL(head, 4);
    int n;
    cin>>n;
    cout << searchLL(head, n) << endl;
    return 0;
}