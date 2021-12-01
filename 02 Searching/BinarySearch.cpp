#include <iostream>
using namespace std;
// Time Complexity of Binary Search is O(log N)
int binarySearch(int *arr, int n, int key)
{
    int s = 0, e = n - 1;
    while (s <= e) // this will stop once the starting index(s) > ending index (e)
    {
        int mid = (s + e) / 2; // finding the middle index
        if (arr[mid] == key)   // if the value at middle index is equal to the key then return the middle index value
        {
            return mid;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 2, 10, 11, 19, 29, 30};
    int key = 11;
    int n = sizeof(arr) / sizeof(int);
    int a = binarySearch(arr, n, key);
    if (a != -1)
    {
        cout << key << " found at index " << a << endl;
    }
    else
    {
        cout << key << " is not found" << endl;
    }
    return 0;
}