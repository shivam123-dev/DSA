#include <iostream>
using namespace std;
int func(int sum, int prev_sum){
    if(prev_sum < sum){
        return sum;
    }
    return prev_sum;
}
void sum(int *arr, int n)
{
    int prev_sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += arr[k];
            }
            prev_sum = func(sum, prev_sum);
        }
    }
    cout << prev_sum;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(int);
    cout << "The largest sum of subarray is: \n";
    sum(arr, n);

    return 0;
}