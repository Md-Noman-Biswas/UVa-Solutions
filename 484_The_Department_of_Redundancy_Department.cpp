#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"

void solve(){
    int n;
    unordered_map<int, int> mp;
    vector<int> v;
    while(cin >> n){
        if(mp[n] == 0) v.push_back(n);
        mp[n]++;
    }
    for(auto it: v){
        cout << it << " " << mp[it] << "\n";
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
        solve();
    return 0;
}