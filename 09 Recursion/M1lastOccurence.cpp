#include <iostream>
using namespace std;
int last(int arr[], int n, int key, int i){
    if(i<0){
        return -1;
    }
    if(arr[i] == key){
        return i;
    }
    return last(arr, n, key, --i);
}
int main() {
    int arr[] = {4, 2, 1, 5, 2, 1};
    int n =sizeof(arr)/sizeof(int);
    int key;
    cin >> key;
    cout << last(arr, n, key, n-1);
    return 0;
}
