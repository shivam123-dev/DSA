#include <iostream>
using namespace std;
int first(int arr[], int n,int key, int i){
    if(i > n-1){
        return -1;
    }
    if(arr[i] == key){
        return i;
    }
    return first(arr, n, key, ++i);
}
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(int);
    int key;
    cin >> key;
    cout << first(arr, n,key, 0) << endl;
    return 0;
}
