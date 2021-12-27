#include <iostream>
using namespace std;
class Queue
{
    int *arr;
    int front;
    int rear;
    int ms;
    int cs;
public:
    Queue(int default_size = 5){
        ms = default_size;
        arr = new int[ms];
        cs = 0;
        front = 0;
        rear = ms-1;
    }
    bool isEmpty(){
        if(cs == 0){
            return true;
        }
        return false;
    }
    bool isFull(){
        if(cs == ms){
            return true;
        }
        return false;
    }
    void push(int data){
        if(isFull()){
            cout << "Queue Overflow\n";
            return;
        }
        rear = (rear+1)%ms;
        arr[rear] = data;
        cs++;
    }
    void pop(){
        if(isEmpty()){
            cout << "Queue Underflow\n";
            return;
        }
        front = (front+1)%ms;
        cs--;
    }
    int Front(){
        return arr[front];
    }
};
int main()
{
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    // q.display();
    // q.pop();
    // q.push(6);
    // cout << q.isFull() << endl;
    cout << q.isEmpty() << endl;

    while(!q.isEmpty()){
        cout << q.Front() << " ";
        q.pop();
    }
    return 0;
}