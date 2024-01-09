#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"

void solve(){
    string s;
    map<string, string> mp; 
    while(getline(cin, s), s != "\0"){
        stringstream ss(s);
        string eng, fore;
        ss >> eng >> fore;
        mp[fore] = eng; 
    }


    while(getline(cin, s)){
        if(mp.find(s) != mp.end()){
            cout << mp[s] << "\n";
        }else{
            cout << "eh" << "\n";
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}