#include<iostream>
using namespace std;
// Top Down DP  --> Recursive + Memoisation Approach
int fibo(int n, int dp[]){
    if(n == 0 or n == 1){
        return n;
    }
    if(dp[n]!=0){
        return dp[n];
    }
    return dp[n] = fibo(n-1, dp) + fibo(n-2, dp);
}
// Bottom Up DP  --> Iterative Approach
int fib(int n, int dp[]){
    dp[n+1] = {0};
    dp[0] = 0;
    dp[1] = 1;
    for(int i=2;i<=n;i++){
        dp[i] = dp[i-1]+dp[i-2];
    }
    return dp[n];
}
int main(){
    int n;
    cin >> n;
    int *dp = new int[n+1];
    cout << fibo(n, dp) << endl;
    cout << fib(n, dp) << endl;
    return 0;
}