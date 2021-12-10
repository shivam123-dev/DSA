// Function to check whether array is sorted or not
#include <iostream>
#include <vector>
using namespace std;
bool check(int *arr, int n, int i)
{
    // base case
    if(i == n-1){
        return true;
    }
    // recursive case
    if(arr[i] < arr[i+1] and check(arr, n, i+1)){
        return true;
    }
    return false;
}
int main()
{
    // int arr[] = {1, 2, 5, 3};
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    if (check(arr, n, 0))
    {
        cout << "Array is sorted" << endl;
    }
    else
    {
        cout << "Array is unsorted" << endl;
    }
    return 0;
}