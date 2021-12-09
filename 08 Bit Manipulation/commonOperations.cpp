#include<iostream>
using namespace std;
// for getting the ith bit
int getithbit(int n, int i){
    int mask = (1 << i);
    return (n&mask) > 0 ? 1:0;
}
// for setting the ith bit
int setithbit(int n, int i){
    int mask = (1 << i);
    return n|mask;
}
// for clearing ith bit
int clearithbit(int n, int i){
    int mask = ~(1 << i);
    return n&mask;
}
// for updating ith bit
int updateithbit(int n, int i, int v){
    clearithbit(n, i);
    int mask = (v << i);
    return n|mask;  
}
int main(){
    int n, pos;
    cin >> n >> pos;
    // cout << getithbit(n, pos) << endl;
    // cout << setithbit(n, pos) << endl;
    // cout << clearithbit(n, pos) << endl;
    cout << updateithbit(n, pos, 1) << endl;
    return 0;    
}