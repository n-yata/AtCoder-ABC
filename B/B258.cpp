#include <bits/stdc++.h>
using namespace std;
#define rep(i,num,n) for (int i = num; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    int n;
    cin >> n;
    ll ans = 0;
    vector<vector<ll>> a(n,vector<ll>(n));
    rep(i,0,n){
        rep(j,0,n){
            char c;
            cin >> c;
            a[i][j] = c-'0';
        }
    }
    vector<int> p={1,1,1,0,0,-1,-1,-1},q{1,0,-1,1,-1,1,0,-1};
    rep(i,0,n)rep(j,0,n)rep(k,0,8){
        ll now = 0;
        ll x = i, y = j;
        rep(l,0,n){
            now *= 10;
            now += a[x][y];
            x += p[k];
            y += q[k];
            x %= n;
            x += n;
            y %= n;
            y += n;
            x %= n;
            y %= n;
        }
        ans = max(ans, now);
    }
    cout << ans << endl;
    return 0;
}