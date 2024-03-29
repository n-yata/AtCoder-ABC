#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class t> inline bool chmax(t& a, t b) { if (a < b) { a = b; return 1; } return 0; }
template<class t> inline bool chmin(t& a, t b) { if (a > b) { a = b; return 1; } return 0; }

const ll inf = 1ll<<60;
const ll mod = 1'000'000'007;

int main(){
    int n;
    cin >> n;
    vector<double> a(n),b(n);
    rep(i,n) cin >> a[i] >> b[i];
    double t = 0;
    double ans = 0;
    rep(i,n) t += a[i]/b[i];
    t /= 2;
    rep(i,n){
        ans += min(a[i],t*b[i]);
        t -= min(a[i]/b[i],t);
    }
    printf("%.10f\n", ans);
    return 0;
}