// Appending last K nodes at the starting of linked list
#include<iostream>
using namespace std;
class node{
public:
    int data;
    node* next;
    node(int d):data(d), next(NULL){}
};
int length(node* head){
    int count = 0;
    node* temp = head;
    while(temp!=NULL){
        temp = temp->next;
        count++;
    }
    return count;
}
void insertLL(node* &head, int val){
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
}
node* append(node* &head, int k){
    int len = length(head);
    node* temp = head;
    node* newTail, *newHead;
    int count = 1;
    while(temp->next!=NULL){
        if(count == (len-k)){
            newTail = temp;
        }
        else if(count == ((len-k)+1)){
            newHead = temp;
        }
        temp = temp->next;
        count++;
    }
    node* tail = temp;
    newTail->next = NULL;
    tail->next = head;
    head = newHead;
    return head;
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
    insertLL(head, 5);
    insertLL(head, 6);
    displayLL(head);
    head = append(head, 3);
    displayLL(head);
    return 0;
}