#include<iostream>
using namespace std;
class node{
public:
    int data;
    node* next;
    node(int d):data(d),next(NULL){}
};
int length(node* head){
    int count = 1;
    node* temp = head;
    while(temp){
        temp = temp->next;
        count++;
    }
    return count;
}
int intersection(node* &head1, node* &head2){
    int len1 = length(head1);
    node* ptr1 = head1, *ptr2 = head2;
    int len2 = length(head2);
    int count = abs(len1-len2);
    if(len1>len2){
        while (count--){
            ptr1 = ptr1->next;
        }
    }
    else{
        while(count--){
            ptr2 = ptr2->next;
        }
    }
    while(ptr1->next != NULL and ptr2->next!=NULL){
        if(ptr1->data == ptr2->data){
            break;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    if(ptr1){
        return ptr1->data;
    }
    else{
        return -1;
    }
}
void insertAtTail(node *&head, int val){
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
int main(){
    node* head1 = NULL, *head2 = NULL;
    insertAtTail(head1, 1);
    insertAtTail(head1, 2);
    insertAtTail(head1, 3);
    insertAtTail(head1, 4);
    insertAtTail(head1, 5);
    insertAtTail(head1, 6);
    insertAtTail(head2, 9);
    insertAtTail(head2, 10);
    insertAtTail(head2, 5);
    insertAtTail(head2, 6);
    cout << intersection(head1, head2);
    return 0;
}