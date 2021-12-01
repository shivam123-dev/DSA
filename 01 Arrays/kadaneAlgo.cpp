#include <iostream>
using namespace std;
void largestSum(int arr[], int n)
{
    int largest = 0, cs = 0;
    for (int i = 0; i < n; i++)
    {
        cs += arr[i]; // first calculate the current sum
        if (cs < 0)   // then check if it is negative then make it zero
        {
            cs = 0;
        }
        largest = max(largest, cs);
    }
    cout << "The maximum sum subarray is: ";
    cout << largest << endl;
}
int main(void)
{
    // int arr[] = {-2, 4, 5, 1, 2, 232};
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(int);
    largestSum(arr, n);
}