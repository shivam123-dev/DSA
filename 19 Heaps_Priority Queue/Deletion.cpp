#include<iostream>
using namespace std;
void heapify(int arr[], int n, int i){
    int largest = i;  // for maxHeap
    // int smallest = i; // for minHeap
    int left_child = (2*i+1);
    int right_child = (2*i+2);
    // for maxHeap
    if(arr[left_child] > arr[i] and left_child<n){
        largest = arr[left_child];
    }
    if(arr[right_child] > arr[i] and right_child < n){
        largest = arr[right_child];
    }
    if(largest != i){
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
    // for minHeap
    // if(arr[left_child] < arr[i] and left_child<n){
    //     smallest = arr[left_child];
    // }
    // if(arr[right_child] < arr[i] and right_child < n){
    //     smallest = arr[right_child];
    // }
    // if(smallest != i){
    //     swap(arr[i], arr[smallest]);
    //     heapify(arr, n, smallest);
    // }
}
void deleteNode(int arr[], int &n){
    int lastElement = arr[n-1];
    arr[0] = lastElement;
    n = n-1;
    heapify(arr, n, 0);
}
void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[] = {10, 5, 3, 2, 4};
    int n = sizeof(arr)/sizeof(int);
    deleteNode(arr, n);
    printArray(arr, n);
    return 0;
}