// Including necessary header files
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// Defining some variables
#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
// custom Compare function
bool Compare(pii a, pii b)
{
    double v1 = (double)a.first / a.second;
    double v2 = (double)b.first / b.second;
    return v1 > v2;
}
int main()
{
    // n --> number of testcases
    int n;
    cin >> n;
    vii a(n); // creating a vector of pairs
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }
    int w; // given weight of sack
    cin >> w;
    sort(a.begin(), a.end(), Compare); // sorting the weights and values given as per the weight/value
    int ans = 0;
    int i = 0;
    while (w != 0)
    {
        if (w >= a[i].first)
        {
            ans += a[i].second;
            w -= a[i].first;
        }
        else
        {
            double vw = (double)a[i].first / a[i].second;
            ans += vw * w;
            w = 0;
            break;
        }
        i++;
    }
    // Printing the maximum value
    cout << ans << endl;
    return 0;
}