#include <iostream>
using namespace std;
// for getting the ith bit
int getithbit(int n, int i)
{
    int mask = (1 << i);
    return (n & mask) > 0 ? 1 : 0;
}
// for setting the ith bit
int setithbit(int n, int i)
{
    int mask = (1 << i);
    return n | mask;
}
// for clearing ith bit
int clearithbit(int n, int i)
{
    int mask = ~(1 << i);
    return n & mask;
}
// for updating ith bit
int updateithbit(int n, int i, int v)
{
    clearithbit(n, i);
    int mask = (v << i);
    return n | mask;
}
// for clearing last I bits
int clearlastibits(int n, int i)
{
    int mask = (-1 << i);
    return n & mask;
}
// for clearing a range of bits
int clearRangeofBits(int n, int i, int j)
{
    int a = (-1) << (j + 1);
    int b = (1 << i) - 1;
    int mask = a | b;
    return n & mask;
}
int main()
{
    int n, i, j;
    cin >> n >> i >> j;
    // int n, pos;
    // cin >> n >> pos;
    // cout << getithbit(n, pos) << endl;
    // cout << setithbit(n, pos) << endl;
    // cout << clearithbit(n, pos) << endl;
    // cout << updateithbit(n, pos, 1) << endl;
    // cout << clearlastibits(n, pos) << endl;
    cout << clearRangeofBits(n, i, j) << endl;
    return 0;
}