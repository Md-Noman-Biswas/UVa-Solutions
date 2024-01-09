#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"

int binary_search(int x, vector<int> &arr){
    int l = 0;
    int r = arr.size();
    int ans = -1;
    while(l <= r){
        int mid = l + (r - l)/2;
        if(arr[mid] == x){
            ans = mid;
            r = mid - 1; 
        }
        else if(arr[mid] < x){
            l = mid + 1;
        }else{
            r = mid - 1;
        }
    }
    return ++ans;
}

void solve(){
    int n, q;
    int t = 1;
    while(cin >> n >> q){
        if(n == 0 && q == 0) break;
        cout << "CASE# " << t << ":" << nl;

        vector<int> arr(n);
        for(int i=0; i<n; i++) cin >> arr[i];
        sort(arr.begin(), arr.end());

        while(q--){
            int x;
            cin >> x;
            int ans = binary_search(x, arr);
            if(ans == 0){
                cout << x << " not found" << nl;
            }else{
                cout << x << " found at " << ans << nl;
            }   
        }
        t++;
    }    
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}