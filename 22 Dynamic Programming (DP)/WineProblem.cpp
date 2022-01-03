#include<iostream>
#include<vector>
using namespace std;
// Recursion
int wineProblem(vector<int> prices, int y, int l, int r){
    // base case
    if(l > r){
        return 0;
    }
    // rec case
    int a = prices[l] * y + wineProblem(prices, y+1, l+1, r);
    int b = prices[r] * y + wineProblem(prices, y+1, l, r-1);
    return max(a, b);
}
// Top Down DP
int winesDP(vector<int> prices, int dp[][10], int y, int l, int r){
    // base case
    if(l > r){
        return 0;
    }
    // check if that state is already calculated
    if(dp[l][r]){
        return dp[l][r];
    }
    // rec case
    int a = prices[l]*y + winesDP(prices, dp, y+1, l+1, r);
    int b = prices[r]*y + winesDP(prices, dp, y+1, l, r-1);
    return dp[l][r] = max(a, b);
}
int main(){
    vector<int> prices = {2, 3, 5, 1, 4};
    int n = prices.size();
    int y = 1;
    int l = 0;
    int r = n-1;
    int dp[10][10] = {0};
    cout << wineProblem(prices, y, l, r) << endl;
    cout << winesDP(prices, dp, y, l, r) << endl;
    return 0;
}