#include <iostream>
#include "Vector.h"
using namespace std;
int main()
{
    Vector v(3);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
    cout << v.size() << endl;
    cout << v.capacity() << endl;
    cout << v.front() << endl;
    cout << v.back() << endl;
    cout << v.at(2) << endl;
    cout << v.isEmpty() << endl;
    return 0;
}