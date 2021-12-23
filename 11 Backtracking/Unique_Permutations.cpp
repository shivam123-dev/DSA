#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> v;
void permute(vector<int> &arr, int idx){
    // base case
    if(idx == arr.size()){
        v.push_back(arr);
        return;
    }
    // recursive case
    for(int i=idx;i<arr.size();i++){
        if(i!=idx and arr[i] == arr[idx]){
            continue;
        }
        swap(arr[idx], arr[i]);
        permute(arr, idx+1);
        swap(arr[idx], arr[i]);
    }
    return;
}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(auto &x : arr){
        cin >> x;
    }
    permute(arr, 0);
    for(auto i:v){
        for(auto x:i){
            cout << x << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}