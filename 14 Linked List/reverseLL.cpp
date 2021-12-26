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
void reverseLL(node* &head){
    node* prevNode = head;
    node* nextNode = head->next;
    node* temp = head;
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

}