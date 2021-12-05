#include<iostream>
using namespace std;
int main(){
    
    int a = 10;             // initialising variable
    int *xptr = &a;         // pointer variable
    int **xxptr = &xptr;    // pointer to pointer variable
    cout << a << endl;      // gives value of a
    cout << &a << endl;     // gives the address of a
    cout << xptr << endl;   // gives the address of a
    cout << &xptr << endl;  // gives the address of xptr
    cout << xxptr << endl;  // gives the address of xptr
    cout << &xxptr << endl; // gives the address of xxptr
    return 0;
}