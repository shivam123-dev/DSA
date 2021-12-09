#include<iostream>
using namespace std;
int countSetBits(int n){
    int cnt = 0;
    while(n!=0){
        cnt+=(n&1);
        n = n>>1;
    }
    return cnt; 
}
int main(void){
    int n;
    cin >> n;
    cout << countSetBits(n) << endl;
}