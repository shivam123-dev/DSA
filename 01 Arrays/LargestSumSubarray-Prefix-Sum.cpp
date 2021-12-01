#include <iostream>
using namespace std;
int largestSum(int arr[], int n)
{
    // making an array of cumulative sum
    int large = 0;
    int prefixSum[n];
    prefixSum[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        prefixSum[i] = prefixSum[i - 1] + arr[i]; // imp line
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int subarraysum = i > 0 ? prefixSum[j] - prefixSum[i - 1] : prefixSum[j]; // imp line
            large = max(subarraysum, large);
        }
    }
    return large;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(int);
    cout << "The largest sum of all the subarrays of the given array is: " << largestSum(arr, n);
    return 0;
}