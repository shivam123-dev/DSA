#include <iostream>
using namespace std;
int main()
{
    int len = 0;
    char temp = cin.get();
    while (temp != '\n')
    {
        cout << temp;
        len++;
        temp = cin.get();
    }
    cout << endl;
    cout << "Length : " << len << endl;
    return 0;
}