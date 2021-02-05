#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;

int main(){
    int n;
    cin >> n;
    ll h[100010];
    ll dp[100010];
    rep(i,n) cin >> h[i];
    rep(i, 100010) dp[i] = INF;
    dp[0] = 0;
    for(int i = 1; i < n; ++i){
        chmin(dp[i],dp[i-1]+abs(h[i]-h[i-1]));
        if(i > 1) chmin(dp[i],dp[i-2]+abs(h[i]-h[i-2]));
    }
    cout << dp[n-1] << endl;
    return 0;
}