#include<iostream>
using namespace std;
int main(){
    int *q = NULL;      // Null pointer
    int *p = 0;         // Null pointer
    cout << p << " " << q << " " << endl;
    cout << *p << " " << *q << endl;   // here we are trying to dereference a null ptr 
                                       // and hence it gives segmentation fault
    return 0;
}