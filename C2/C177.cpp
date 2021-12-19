#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    int n;
    cin >> n;
    vector<ll> a(n);
    vector<ll> b(n+1,0);
    rep(i,n) cin >> a[i];
    rep(i,n) b[i+1] = b[i]+a[i];
    ll ans = 0;
    rep(i,n){
        ll sum = (b[n]-b[i+1])%MOD;
        ans += a[i]*sum;
        ans %= MOD;
    }
    cout << ans << endl;
    return 0;
}