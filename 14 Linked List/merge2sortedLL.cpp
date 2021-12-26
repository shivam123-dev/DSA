#include<iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int d) : data(d), next(NULL) {}
};
void insertAtTail(node *&head, int val)
{
    node *temp = new node(val);
    if (head == NULL)
    {
        head = temp;
        return;
    }
    node *n = head;
    while (n->next != NULL)
    {
        n = n->next;
    }
    n->next = temp;
}
void displayLL(node* head){
    node* t = head;
    while(t){
        cout << t->data << "->";
        t = t->next;
    }
    cout << "NULL" << endl;
} 
void mergeSortedLL(node* &head1, node* &head2){
    node* ptr1 = head1, *ptr2 = head2;
    node* dummyNode = new node(-1);
    node* temp = dummyNode;
    while(ptr1!=NULL and ptr2!=NULL){
        if(ptr1->data<ptr2->data){
            temp->next = ptr1;
            ptr1 = ptr1->next;
        }
        else{
            temp->next = ptr2;
            ptr2 = ptr2->next;
        }
        temp = temp->next;
    }
    while(ptr1!=NULL){
        temp->next = ptr1;
        ptr1 = ptr1->next;
        temp = temp->next;
    }
    while(ptr2!=NULL){
        temp->next = ptr2;
        ptr2 = ptr2->next;
        temp = temp->next;
    }
    temp->next = NULL;
    displayLL(dummyNode->next);
}
int main(){
    node* head1 = NULL, *head2 = NULL;
    insertAtTail(head1, 1);
    insertAtTail(head1, 3);
    insertAtTail(head1, 5);
    insertAtTail(head1, 7);
    displayLL(head1);
    insertAtTail(head2, 2);
    insertAtTail(head2, 4);
    insertAtTail(head2, 6);
    displayLL(head2);
    mergeSortedLL(head1, head2);
    return 0;
}