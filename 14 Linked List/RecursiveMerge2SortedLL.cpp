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
void displayLL(node *head)
{
    node *t = head;
    while (t)
    {
        cout << t->data << "->";
        t = t->next;
    }
    cout << "NULL" << endl;
}
node* mergeSortedLL(node* h1, node* h2) {
    // base case
    if(h1 == NULL){
        return h1;
    }
    if(h2 == NULL){
        return h2;
    }
    // recursive case
    node* result;
    if(h1->data<h2->data){
        result = h1;
        result->next = mergeSortedLL(h1->next, h2);
    }
    else{
        result = h2;
        result->next = mergeSortedLL(h1, h2->next);
    }
    return result;
}
int main()
{
    node *head1 = NULL, *head2 = NULL;
    insertAtTail(head1, 1);
    insertAtTail(head1, 3);
    insertAtTail(head1, 5);
    insertAtTail(head1, 7);
    displayLL(head1);
    insertAtTail(head2, 2);
    insertAtTail(head2, 4);
    insertAtTail(head2, 6);
    displayLL(head2);
    node* newHead = mergeSortedLL(head1, head2);
    displayLL(newHead);
    return 0;
}