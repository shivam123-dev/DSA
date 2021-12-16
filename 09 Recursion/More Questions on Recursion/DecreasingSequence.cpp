#include<iostream>
using namespace std;
void decreasing (int n){
    if(n == 1){
        cout << 1 << " ";
        return;
    }
    cout << n << " ";
    decreasing(n-1);
}
int main()
{
    int n;
    cin >> n;
    decreasing(n);
    return 0;
}