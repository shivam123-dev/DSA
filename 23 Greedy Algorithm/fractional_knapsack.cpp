#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i, a, b) for(int i=a;i<b;i++)
bool Compare(pii a, pii b){
    double v1 = (double) a.first/a.second;
    double v2 = (double) b.first/b.second;
    return v1>v2;
}
int main(){
    int n;
    cin >> n;
    vii a(n);
    rep(i, 0, n){
        cin >> a[i].first >> a[i].second;
    }
    int w;
    cin >> w;
    sort(a.begin(), a.end(), Compare);
    int ans = 0;
    rep(i, 0, n){
        if(w >= a[i].second){
            ans += a[i].first;
            w -= a[i].second;
            continue;
        }
        double vw = (double) a[i].first/a[i].second;
        ans += vw*w;
        w = 0;
        break;
    }
    cout << ans << endl;
    return 0;
}