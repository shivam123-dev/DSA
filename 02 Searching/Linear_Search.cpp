#include<iostream>
using namespace std;
int linear_search(int *arr, int n, int key){
    for(int i=0;i<n;i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 2, 4, 12, 45, 32, 100};
    int n = sizeof(arr)/sizeof(int);
    if(linear_search(arr, n, 12)!=-1){
        cout <<"12 is found at index " << linear_search(arr, n, 12) << endl;
    }
    else{
        cout << "12 is not found" << endl;
    }
    return 0;
}