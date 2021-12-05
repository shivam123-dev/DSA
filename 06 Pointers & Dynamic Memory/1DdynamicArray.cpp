#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int *arr = new int [n];  // creates a dynamic array
    cout << arr << endl;     // prints the address of dynamic array
    for(int i=0;i<n;i++){
        arr[i] = i;
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << arr << endl;     // prints the address of dynamic array

    delete [] arr;           // deletes the dynamic array

    cout << arr << endl;     // it still prints the address of dynamic array but that array is deleted
    return 0;
}