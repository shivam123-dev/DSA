#include <iostream>
using namespace std;
void printPairs(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout << "(" << arr[i] << ", " << arr[j] << ")" << endl;
        }
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(int);
    cout << "The pairs of the array are: \n";
    printPairs(arr, n);
    return 0;
}