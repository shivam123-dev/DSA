#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void bubblesort(int arr[], int n)
{
    // running the loop for n-1 times
    for (int i = 0; i < n - 1; i++)
    {
        // doing repeated swapping
        for (int j = 0; j <= n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
int main()
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(int);
    bubblesort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << endl;
    return 0;
}