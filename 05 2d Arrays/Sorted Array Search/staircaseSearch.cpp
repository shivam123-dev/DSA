#include<iostream>
using namespace std;
pair<int, int> staircaseSearch(int arr[][4],int n, int m, int key){
    //base case
    if(key<arr[0][0] or key > arr[n-1][m-1]){
        return {-1, -1};
    }
    int i = 0, j = m-1;
    while(i<n and j>=0){
        if(arr[i][j] == key){
            return {i, j};
        }
        else if(arr[i][j] > key){
            j--;
        }
        else{
            i++;
        }
    }
    return {-1, -1};
}
int main(){
    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16},
    };
    int n=4, m=4, key=5;
    pair <int, int> cords = staircaseSearch(arr, n, m, key);
    cout << cords.first << ", " << cords.second << endl;
    return 0;
}