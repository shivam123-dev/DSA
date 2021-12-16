#include <iostream>
using namespace std;
int power(int a, int n){
    // base case
    if(n == 0){
        return 1;
    }
    // recursive case
    int subProblem = power(a, n/2);
    int res = subProblem*subProblem;
    if(n&1){
        return a*res;
    }
    return res;
}

int main() {
    int a, n;
    cin >> a >> n;
    cout << power(a, n) << endl;
    return 0;
}