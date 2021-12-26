// Deletion using both head and tail pointers
#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
void insertAtHead(node* &head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}
void insertAtTail(node* &head, node* &tail, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = tail = n;
        return;
    }
    node *temp = tail;
    temp->next = n;
    tail = n;
}
void insertInMiddle(node* &head, int val, int pos)
{
    node *temp = head;
    node *n = new node(val);
    while (temp->data != pos)
    {
        temp = temp->next;
    }
    n->next = temp->next;
    temp->next = n;
}
void displayLL(node *head)
{
    node *temp = head;
    while (temp)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
void deleteAthead(node* &head)
{
    if (head == NULL)
    {
        cout << "Empty Linked List" << endl;
        return;
    }
    node *temp = head;
    head = temp->next;
    cout << "Deleting " << temp->data << endl;
}
void deleteAtTail(node* &head, node* &tail)
{
    if (head == NULL)
    {
        cout << "Empty Linked List" << endl;
        return;
    }
    node *temp = head;
    while (temp->next != tail)
    {
        temp = temp->next;
    }
    cout << "Deleting " << tail->data << endl;
    tail = temp;
    tail->next = NULL;
}
void deleteInMiddle(node* &head, int pos)
{
    node *temp = head;
    node *nextNode = temp->next;
    while (nextNode->data != pos)
    {
        nextNode = nextNode->next;
    }
    cout << "Deleting " << temp->data << endl;
    temp->next = nextNode->next;
}
int main()
{
    node* head = NULL;
    node* tail = NULL;
    insertAtTail(head, tail, 1);
    insertAtTail(head, tail, 2);
    insertAtTail(head, tail, 3);
    insertAtTail(head, tail, 4);
    displayLL(head);
    deleteAthead(head);
    displayLL(head);
    deleteAtTail(head, tail);
    displayLL(head);
    deleteInMiddle(head, 3);
    displayLL(head);
    return 0;
}