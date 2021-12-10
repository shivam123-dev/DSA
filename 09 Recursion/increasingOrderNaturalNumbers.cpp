#include<iostream>
using namespace std;
void print(int n, int i){
    if(i == n){
        cout << n;
        return;
    }
    cout << i << ", ";
    i++;
    print(n, i);
}
int main(){
    int n;
    cin >> n;
    print(n, 1);
}