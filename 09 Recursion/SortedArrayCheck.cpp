#include<iostream>
using namespace std;
bool func(int *arr, int n){
    if(n == 1){
        return true;
    }
    return(arr[0]<arr[1] and func(arr+1, n));
}
int main(){
    int arr[] = {1, 2, 3, 4, 1};
    int n = sizeof(arr)/sizeof(int);
    if(func(arr, n)){
        cout<<"Sorted"<<endl;
    }
    else{
        cout <<"Unsorted"<<endl;
    }
    return 0;
}