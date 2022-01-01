#include<bits/stdc++.h>
using namespace std;
#define rep(var, start, end) for(int var=start;var<end;var++)
#define mp map<int, int>
signed main(){
    int n;
    cin >> n;
    vector<int> v(n);
    rep(i, 0, n){
        cin >> v[i];
    }
    int prefSum = 0;
    mp cnt;
    rep(i, 0, n){
        prefSum += v[i];
        cnt[prefSum]++;
    }
    int ans=0;
    mp :: iterator it;
    for(it = cnt.begin(); it != cnt.end(); it++){
        int c = it->second;
        ans += (c*(c-1))/2;
        if(it->first == 0){
            ans += it->second;
        }
    }
    cout << ans << endl;
    return 0;
}