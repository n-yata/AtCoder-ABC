#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;

int main(){
    int n, k;
    cin >> n >> k;
    ll h[1000010];
    ll dp[1000010];
    rep(i,n) cin >> h[i];
    rep(i,1000010) dp[i] = INF;
    dp[0] = 0;
    for(int i = 0; i < n; ++i){
        for(int j = 1; j <= k; ++j){
            chmin(dp[i+j], dp[i]+abs(h[i]-h[i+j]));
        }
    }
    cout << dp[n-1] << endl;
    return 0;
}