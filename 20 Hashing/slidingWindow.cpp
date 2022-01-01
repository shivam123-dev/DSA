#include <iostream>
#include <climits>
#include <vector>
using namespace std;
signed main()
{
    int n, k;
    cin >> n >> k;
    vector<int> vi(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vi[i];
    }
    int s = 0, ans = INT_MAX;
    for (int i = 0; i < k; i++)
        s += vi[i];
    ans = min(ans, s);
    for (int i = 1; i < n - k + 1; i++)
    {
        s -= vi[i-1];
        s += vi[i + k - 1];
        ans = min(ans, s);
    }
    cout << ans << endl;
    return 0;
}