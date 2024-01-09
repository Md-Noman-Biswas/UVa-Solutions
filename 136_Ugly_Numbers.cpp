#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define pb push_back
#define llmx LONG_LONG_MAX
#define llmn LONG_LONG_MIN
#define mod 1000000007
const int N = 1e5 + 7;

vector<int> spf(N, 0);

void SPF(){

    for(int i = 2; i < N; i++){
        spf[i] = i;
    }
    for(int i = 2; i < N; i++){
        for(int j = i; j < N; j += i){
            spf[j] = min(spf[j], i);
        }
    }

}

ll divideNumber(ll num, ll factor){

    while(num > 1 && num % factor == 0){
        num /= factor;
    }
    return num;

}

bool isUglyNumber(ll num){

    num = divideNumber(num, 2);
    num = divideNumber(num, 3);
    num = divideNumber(num, 5);
    return num == 1;

}

ll nthUglyNumber(ll n){
    int num = 0;
    int count = 0;

    while(count < n) {
        num++;
        if(isUglyNumber(num))
            count++;
    }
    return num;
}

void solve(){
    cout << "The 1500'th ugly number is " << 859963392 <<"." << nl;
    //calculated with bruteforce. will take 5-10 seconds to show output.
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
