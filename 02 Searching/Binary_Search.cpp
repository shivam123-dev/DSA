#include <iostream>
using namespace std;
int binary_search(int *arr, int n, int key, int low, int high)
{
    int mid = (low + high) / 2;
    if (arr[low] == key)
    {
        return 0;
    }
    if (arr[high] == key)
    {
        return n - 1;
    }
    if (arr[mid] == key)
    {
        return mid;
    }
    else
    {
        if (key < arr[mid])
        {
            high = mid;
            binary_search(arr, n, key, low, high);
        }
        else
        {
            low = mid;
            binary_search(arr, n, key, low, high);
        }
    }
    return -1;
}
int main()
{

    return 0;
}