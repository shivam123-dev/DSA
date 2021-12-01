#include <iostream>
using namespace std;
int main()
{
    int n, marks[100] = {0};
    cin >> n;
    cout << "Enter the marks of the students: ";
    // Input
    for (int i = 0; i < n; i++)
    {
        cin >> marks[i];
    }
    // Output
    for (int i = 0; i < n; i++)
    {
        cout << marks[i] << " ,";
    }
    return 0;
}