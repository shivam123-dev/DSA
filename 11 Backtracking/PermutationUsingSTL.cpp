#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> permute(vector<int> &nums){
    vector<vector<int>> temp;
    sort(nums.begin(), nums.end());
    do{
        temp.push_back(nums);
    }while(next_permutation(nums.begin(), nums.end()));
    return temp;
}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(auto &i: arr){
        cin >> i;
    }
    vector<vector<int>> v = permute(arr);
    for(auto a:v){
        for(auto i:a){
            cout << i << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}