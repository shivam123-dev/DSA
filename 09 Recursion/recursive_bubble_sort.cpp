#include <iostream>
using namespace std;
void bubblesort_rec(int arr[], int n){
    // base case
    if(n == 1){
        return;
    }
    for(int j=0;j<n-1;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j], arr[j+1]);
        }
    }
    bubblesort_rec(arr, n-1);
}
void bubblesort_rec_2(int arr[], int n, int j){
    // base case
    if(n == 1){
        return;
    }
    if(j == n-1){
        // reset the value of j and reduce the problem size
        bubblesort_rec_2(arr, n-1, 0);
        return;
    }
    if(arr[j]>arr[j+1]){
        swap(arr[j], arr[j+1]);
    }
    bubblesort_rec_2(arr, n, j+1);
}
int main() {
    int arr[] = {5, 3, 4, 2, 1};
    int n = sizeof(arr)/sizeof(int);
    bubblesort_rec_2(arr, n, 0);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}
 