// convert decimal number to binary number using bitwise operator
#include <iostream>
#include <vector>
using namespace std;
int convert(int n)
{
    int ans = 0;
    int power = 1;
    while(n>0){
        ans += (n&1)*power;
        power *= 10;
        n = n>>1;
    }
    return ans;
}
int main(void)
{
    int n;
    cin >> n;
    cout << convert(n) << endl;
}