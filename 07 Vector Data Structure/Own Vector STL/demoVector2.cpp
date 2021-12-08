#include <iostream>
// #include "Vector.h"
#include "genericVector.h"
using namespace std;
int main()
{
    // Vector<int> v(3);
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // for (int i = 0; i < v.size(); i++)
    //     cout << v[i] << " ";
    // cout << endl;
    Vector<char> varr(2);
    varr.push_back('a');
    varr.push_back('b');
    for (int i = 0; i < varr.size(); i++)
        cout << varr[i] << " ";
    cout << endl;
    return 0;
    // Vector v(3);
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(4);

    // for (int i = 0; i < v.size(); i++)
    //     cout << v[i] << " ";
    // cout << endl;
    // cout << v.size() << endl;
    // cout << v.capacity() << endl;
    // cout << v.front() << endl;
    // cout << v.back() << endl;
    // cout << v.at(2) << endl;
    // cout << v.isEmpty() << endl;
}