#include<iostream>
using namespace std;
// Pass by reference
void print(int arr[][100], int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int arr[100][100], n, m;
    cin >> n >> m;
    // taking array input
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    // calling the print function
    print(arr, n, m);
    return 0;
}