// Printing all the permutations of the given array containing distinct elements using 
// backtracking
// Time complexity is O(N!)
#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> v;
void permute(vector<int> &arr, int idx)
{
    if (idx == arr.size())
    {
        v.push_back(arr);
        return;
    }
    for (int i = idx; i < arr.size(); i++)
    {
        swap(arr[i], arr[idx]);
        permute(arr, idx + 1);
        swap(arr[i], arr[idx]);
    }
    return;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &i : arr)
    {
        cin >> i;
    }
    permute(arr, 0);
    for (auto i : v)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}