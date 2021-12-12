#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    string s;
    cin >> s;
    int n = s.size();
    vector dp(n+1, vector<int>(9));
    rep(i,n+1) dp[i][0] = 1;
    const int mod = 1000000007;
    string t = "chokudai";
    rep(i,n)rep(j,8){
        if(s[i] != t[j]){
            dp[i+1][j+1] = dp[i][j+1];
        }else{
            dp[i+1][j+1] =(dp[i][j+1]+dp[i][j])%mod;
        }
    }
    cout << dp[n][8] << endl;
    return 0;
}