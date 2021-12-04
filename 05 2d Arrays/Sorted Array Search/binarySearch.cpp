#include <iostream>
using namespace std;
bool binarySearch(int arr[][4], int m, int n, int key)
{
    for(int i=0;i<n;i++){
        int s = 0, e = m - 1;
        while (s <= e)
        {
            int mid = s + ((e - s) / 2);
            if (arr[i][mid] == key)
            {
                return true;
            }
            else if (arr[i][mid] > key)
            {
                e = arr[i][mid] - 1;
            }
            else{
                s = arr[i][mid] + 1;
            }
        }
    }
    return false;
}
int main()
{
    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16},
    };
    int n = 4, m = 4, key = 6;
    if (binarySearch(arr, m, n, key))
    {
        cout << "Element found" << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }
    return 0;
}