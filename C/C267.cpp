#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define repn(i,num,n) for (int i = num; i < (n); ++i)
#define PI 3.14159265359
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    int n,m;
    cin >> n >> m;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];
    ll s = 0, t = 0;
    rep(i,m) s += a[i]*(i+1);
    rep(i,m) t += a[i];
    ll ans = s;
    rep(i,n-m){
        ll ns = s-t+a[i+m]*m;
        ll nt = t-a[i]+a[i+m];
        s = ns; t = nt;
        ans = max(ans,s);
    }
    cout << ans << endl;
    return 0;
}