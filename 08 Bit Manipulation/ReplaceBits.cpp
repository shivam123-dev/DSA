#include<iostream>
using namespace std;

// Replace Bits in N by M
// You are given two 32-bit numbers, N and M, and two bit position i and j.
// Write a method to set all bits between i and j equal to M.
// (M becomes a substring of N locationed at and starting at j)

// Example:
// N = 10000000000;
// M = 10101;
// i = 2, j = 6
// Ouput: 1001010100

void clearBits(int &n, int i, int j){
    int a = ((-1) << (j+1));
    int b = (1 << i) -1;
    int mask = a|b;
    n = n & mask;
}

int res(int N, int M, int i, int j){
    clearBits(N, i, j);
    M = M << i;
    N = N|M;
    return N;
}

int main(void){
    // int N = 1024, M = 21, i = 2, j = 6;
    int N = 15, M = 2, i = 1, j = 3;
    cout << res(N, M, i, j); 
}