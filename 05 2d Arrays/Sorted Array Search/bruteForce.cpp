#include<iostream>
using namespace std;
bool search(int arr[][4], int n, int m, int key){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(key == arr[i][j]){
                return true;
            }
        }
    }
    return false;
}
int main(void){
    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16},
    };
    int n = 4, m = 4;
    int key = 0;
    if(search(arr, n, m, key))
        cout << "Element found" << endl;
    else
        cout << "Element not found" << endl;
}