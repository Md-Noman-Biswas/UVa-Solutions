#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll a,b;
    cin >> a >> b;
    if(b%a){
        cout << -1 << "\n";
    }else{
        cout << a << " " << b << "\n";

    }
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}