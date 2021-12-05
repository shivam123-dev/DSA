#include<iostream>
using namespace std;
int main(){
    int x = 10;
    int &y = x;   // initialisation must be done at the time of declaration

    y++;          // since y and x are same therefore on incrementing y, x also increases

    cout << x << " " << y << endl;
    return 0;
}