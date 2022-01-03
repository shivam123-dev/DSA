#include<iostream>
#include<vector>
using namespace std;
// Top Down ~> Recursive Code
int knapsack(int wts[], int prices[], int n, int w){
    // base case
    if(n == 0 or w == 0){
        return 0;
    }
    // rec case
    int inc = 0, exc = 0;
    if(wts[n-1] <= w){
        inc = prices[n-1] + knapsack(wts, prices, n-1, w - wts[n-1]);
    }
    exc = knapsack(wts, prices, n-1, w);
    return max(exc, inc);
}
// Bottom Up Dp
int knapSack(int wts[], int prices[], int N, int W){
    vector<vector<int> > dp(N+1, vector<int>(W+1, 0));
    for(int i=1;i<=N;i++){
        for(int j=1;j<=W;j++){
            int inc = 0;
            int exc = 0;
            if(wts[N-1] <= W){
                inc = prices[N-1] + dp[N-1][W-wts[N-1]];
            }
            exc = dp[N-1][W];
            dp[i][j] = max(inc, exc);
        }
    }
    return dp[N][W];
}
int main(){
    int wts[] = {2, 7, 3, 4};
    int prices[] = {5, 20, 20, 10};
    int n = 4;
    int w = 11;
    cout << knapsack(wts, prices, n, w) << endl;
    cout << knapSack(wts, prices, n, w) << endl;
    return 0;
}