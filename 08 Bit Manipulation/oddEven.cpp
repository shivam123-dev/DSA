#include<iostream>
using namespace std;
int main(void){
    int x;
    cin >> x;
    if(x&1){
        cout << "Odd";
    }
    else{
        cout << "Even";
    }
    cout << endl;
}