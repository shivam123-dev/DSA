#include <iostream>
using namespace std;
int last(int arr[], int n, int key, int i){
    if(i== n){
        return -1;
    }
    int restArray = last(arr, n, key, ++i);
    if(restArray!=-1){
        return restArray;
    }
    if(arr[i] == key){
        return i;
    }
    return -1;
}
int main() {
    int arr[] = {4, 2, 1, 5, 2, 1};
    int n =sizeof(arr)/sizeof(int);
    int key;
    cin >> key;
    cout << last(arr, n, key, 0);
    return 0;
}
