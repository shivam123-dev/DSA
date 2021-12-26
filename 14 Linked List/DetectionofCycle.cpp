#include<iostream>
using namespace std;
class node{
public:
    int data;
    node* next;
    node(int d):data(d), next(NULL){}
};
void insertAtTail(node* &head, int val){
    node *temp = new node(val);
    if (head == NULL){
        head = temp;
        return;
    }
    node *n = head;
    while (n->next != NULL){
        n = n->next;
    }
    n->next = temp;
}
void makeCycle(node* &head, int pos){
    node* temp = head;
    node* startNode;
    int count=1;
    while(temp->next!=NULL){
        if(count == pos){
            startNode = temp;
        }
        count++;
        temp = temp->next;
    }
    temp->next = startNode;
}
bool detectCycle(node* &head){
    node* slow = head, *fast = head;
    while(fast!=NULL and fast->next!=NULL){
        if(fast==slow){
            return true;
        }
        slow = slow->next;
        fast = fast->next->next;
    }
    return false;
}
int main(){
    node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    insertAtTail(head, 7);
    insertAtTail(head, 8);
    insertAtTail(head, 9);
    makeCycle(head, 4);
    cout << detectCycle(head);
    return 0;
}