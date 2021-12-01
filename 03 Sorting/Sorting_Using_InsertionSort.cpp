#include <iostream>
using namespace std;
void insertionSort(int arr[], int n){
    for(int i=1;i<n;i++){
        int current = arr[i];
        int prev = i-1;
        while(prev>=0 && arr[prev]>current){
            arr[prev+1] = arr[prev];
            prev = prev -1 ;
        }
        arr[prev+1] = current;
    }
}
int main() {
    int arr[] = {-2, 4, 5, 3, 6, 8, -12, -18, 9, 7};
    int n = sizeof(arr)/sizeof(int);
    insertionSort(arr, n);
    for(auto x:arr){
        cout << x << ", ";
    }
    cout << endl;
    return 0;
}
