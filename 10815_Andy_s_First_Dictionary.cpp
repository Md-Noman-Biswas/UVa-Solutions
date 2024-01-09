#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"

void solve(){
    string s;
    set<string> dictionary;
    while(cin >> s){
        string word = "";
        for(int i=0; i<=s.size(); i++){
            if(isalpha(s[i])){
                word += tolower(s[i]);
            }
            else if(word != ""){
                dictionary.insert(word);
                word = "";
            }
        }
    }
    for(auto it = dictionary.begin(); it != dictionary.end(); it++){
        cout << *it << "\n";
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}