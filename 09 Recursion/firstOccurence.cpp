#include <iostream>
using namespace std;
int firstOccurence(int arr[], int n, int key, int i=0)
{
    if (arr[i] == key)
    {
        return i;
    }
    if (i == n)
    {
        return -1;
    }
    firstOccurence(arr, n, key, i + 1);
}
int main()
{
    int arr[] = {1, 2, 3, 4, 1, 5, 2};
    int n = sizeof(arr) / sizeof(int);
    int key = 6;
    cout << firstOccurence(arr, n, key) << endl;
    return 0;
}