#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int coin_change(int m, vector<int> demos){
    vector<int> dp(m+1, 0);
    dp[0] = 0;
    for(int i=1;i<=m;i++){
        dp[i] = INT_MAX;
        for(int c:demos){
            if(i-c >=0 and dp[i-c]!= INT_MAX){
                dp[i] = min(dp[i], dp[i-c]+1);
            }
        }
    }
    return dp[m] == INT_MAX ? -1 : dp[m];
}
int main(){
    vector<int> demos = {1, 5, 7, 10};
    int m = 8;
    cout << coin_change(m, demos) << endl;
    return 0;
}