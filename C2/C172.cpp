#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    int n,m,k;
    cin >> n >> m >> k;
    vector<int> a(n),b(m);
    rep(i,n) cin >> a[i];
    rep(i,m) cin >> b[i];
    vector<ll> aa(n+1),bb(m+1);
    aa[0] = 0;
    rep(i,n) aa[i+1] = aa[i]+a[i];
    bb[0] = 0;
    rep(i,m) bb[i+1] = bb[i]+b[i];
    int ans = 0;
    int ok = m;
    rep(i,n+1){
        while(0 <= ok && k < aa[i]+bb[ok]) ok--;
        if(0 <= ok) chmax(ans,i+ok);
    }
    cout << ans << endl;
    return 0;
}