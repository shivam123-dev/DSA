#include<iostream>
using namespace std;
int countSetBits1(int n){
    int cnt = 0;
    while(n!=0){
        cnt+=(n&1);
        n = n>>1;
    }
    return cnt; 
}
int countSetBits2(int n){
    int cnt = 0;
    while(n){
        n = (n&(n-1));
        cnt++;
    }
    return cnt;
}
int main(void){
    int n;
    cin >> n;
    cout << countSetBits1(n) << endl;
    cout << countSetBits2(n) << endl;
}