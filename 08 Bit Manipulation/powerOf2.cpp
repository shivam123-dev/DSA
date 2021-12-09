#include <iostream>
using namespace std;
bool check(int n)
{
    return (n & (n - 1)) > 0 ? false : true;
}
int main(void)
{
    int N;
    cin >> N;
    if (check(N))
    {
        cout << "Is a power of 2" << endl;
    }
    else
    {
        cout << "Is not a power of 2" << endl;
    }
    return 0;
}