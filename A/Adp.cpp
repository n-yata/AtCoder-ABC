#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define repn(i, num, n) for (int i = num; i < (n); ++i)
#define PI 3.14159265359
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL << 60;
const ll MOD = 1'000'000'007;

int main(){
    int n;
    cin >> n;
    vector<int> h(n);
    rep(i,n) cin >> h[i];
    vector<ll> dp(n);
    rep(i,n) dp[i] = INF;
    dp[0] = 0;
    repn(i,1,n){
        chmin(dp[i],dp[i-1]+abs(h[i]-h[i-1]));
        if(i == 1) continue;
        chmin(dp[i],dp[i-2]+abs(h[i]-h[i-2]));
    }
    cout << dp[n-1] << endl;
    return 0;
}