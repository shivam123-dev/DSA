#include<iostream>
using namespace std;
// Max Heap
void heapifyMax(int arr[], int n, int i){
    int parent = (i-1)/2;
    if(arr[parent]>0){
        if(arr[i] > arr[parent]){
            swap(arr[i], arr[parent]);
            heapifyMax(arr, n, parent);
        }
    }
}
// Min Heap
void heapifyMin(int arr[], int n, int i){
    int parent = (i-1)/2;
    if(arr[parent]>0){
        if(arr[i] < arr[parent]){
            swap(arr[i], arr[parent]);
            heapifyMin(arr, n, parent);
        }
    }
}
void insertNode(int arr[], int &n, int key){
    n = n+1;
    arr[n-1] = key;
    // heapifyMax(arr, n, n-1);  // for max heap insertion
    heapifyMin(arr, n, n-1);  // for min heap insertion
}
void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){
    int arr[] = {10, 5, 3, 2, 4};
    int n = sizeof(arr)/sizeof(int);
    int key = 15;
    insertNode(arr, n, key);
    printArray(arr, n);
    return 0;
}