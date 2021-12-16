#include<iostream>
using namespace std;
void increasingSequence (int n){
    if(n==1){
        cout << 1 << " ";
        return;
    }
    increasingSequence(n-1);
    cout << n << " ";
}
int main(){
    int n;
    cin >> n;
    increasingSequence(n);
    cout << endl;
    return 0;
}