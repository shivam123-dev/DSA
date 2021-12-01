#include <iostream>
using namespace std;
void selectionSort(int arr[], int n){
    for(int pos=0;pos<=n-2;pos++){
        int curr = arr[pos];
        int min_pos = pos;
        for(int j=pos;j<n;j++){
            if(arr[j]<arr[min_pos]){
                min_pos=j;
            }
        }
        swap(arr[min_pos], arr[pos]);
    }
}
int main() {
    // int arr[] = {5, 4, 3, 2, 1};
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr)/sizeof(int);
    selectionSort(arr, n);
    for(auto x:arr){
        cout << x << ", ";
    }
    cout << endl;
    return 0;
}
