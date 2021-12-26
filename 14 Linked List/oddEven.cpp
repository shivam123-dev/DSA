#include <iostream>
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
node* oddEvenLL(node* h){
    node* even = h->next;
    node* odd = h;
    node* evenStart = even;
    while(odd->next!=NULL and even->next!=NULL){
        odd->next = even->next;
        odd = even->next;
        even->next = odd->next;
        even = odd->next;
    }
    odd->next = evenStart;
    return h;
}
int main()
{
    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    displayLL(head);
    node* newHead = oddEvenLL(head);
    displayLL(newHead);
    return 0;
}