#include <iostream>
using namespace std;
void incre(int *y)  // means *y = &x
{
    *y += 1;
}
int main(void)
{
    int x = 10;
    incre(&x);   // passing by reference/address
    cout << x << endl;
}