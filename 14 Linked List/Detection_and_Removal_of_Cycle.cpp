// Detection and Removal of Cycle is based on Floyd's Algorithm
#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int d) : data(d), next(NULL) {}
};
void insertAtTail(node* &head, int val)
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
void makeCycle(node* &head, int pos)
{
    node *temp = head;
    node *startNode;
    int count = 0;
    while (temp->next != NULL)
    {
        if (count == pos)
        {
            startNode = temp;
        }
        count++;
        temp = temp->next;
    }
    temp->next = startNode;
}
bool detectCycle(node* &head)
{
    node *slow = head, *fast = head;
    while (fast != NULL and fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (fast == slow)
        {
            return true;
        }
    }
    return false;
}
void removeCycle(node* &head){
    node *slow = head, *fast = head;
    do{
        slow = slow->next;
        fast = fast->next->next;
    }while(fast!=slow);
    fast = head;
    while(fast->next!=slow->next){
        fast = fast->next;
        slow = slow->next;
    }
    slow->next = NULL;
}
void displayLL(node* head){
    node* temp = head;
    while(temp){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
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
    insertAtTail(head, 7);
    insertAtTail(head, 8);
    insertAtTail(head, 9);
    makeCycle(head, 4);
    if(detectCycle(head)){
        removeCycle(head);
    }
    displayLL(head);
    return 0;
}