#include<iostream>
using namespace std;
#define n 100
class stack{
    int top;
    int* arr;
public:
    stack(){
        arr = new int[n];
        top = -1;
    }
    void push(int data){
        if(top == n-1){
            cout << "Stack Overflow" << endl;
            return;
        }
        arr[++top] = data;
    }
    void pop(){
        if(top == -1){
            cout << "Stack Underflow" << endl;
            return;
        }
        top--;
    }
    int Top(){
        return arr[top];
    }
    bool empty(){
        return top == -1;
    }
    bool full(){
        return top == n-1;
    }
};
int main(){
    stack s;
    cout << s.empty() << endl;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    cout << s.Top() << endl;
    s.pop();
    cout << s.Top() << endl;
    cout << s.full() << endl;
    return 0;
}