#include<iostream>
using namespace std;
bool isSorted(int arr[], int n, int i){
    if(i == n-1){
        return true;
    }
    if((arr[i] < arr[i+1]) and isSorted(arr, n, i+1)){
        return true;
    }
    else{
        return false;
    }
}
// bool sorted(int arr[], int n){
//     if(n == 1){
//         return true;
//     }
//     if(n>1 and arr[0] < arr[1]){
//         return true;
//     }
//     else{
//         return false;
//     }
//     bool ans = sorted(arr+1, n-1);
//     return ans;
// }
int main(){
    // int arr[] = {1, 2, 3, 4};
    int arr[] = {1, 2, 7, 3, 4};
    int n = sizeof(arr)/sizeof(int);
    if(isSorted(arr, n, 0)){
        cout << "Array is sorted" << endl;
    }
    else{
        cout << "Array is unsorted" << endl;
    }
    return 0;
}