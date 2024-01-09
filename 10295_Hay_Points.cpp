#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"

void solve(){
    int m, n;
    cin >> m >> n;
    map<string, int> mp;
    for(int i=0; i<m; i++){
        string s;
        cin >> s;
        int v;
        cin >> v;
        mp[s] = v;
    }
    for(int i=0; i<n; i++){
        int ans = 0;
        string j;
        while(cin >> j && j != "."){
            ans += mp[j];
        }
        cout << ans << nl;
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
        solve();

    return 0;
}