#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    ll n,k;
    cin >> n >> k;
    vector<pair<ll,ll>> a(n);
    rep(i,n){
        ll x,y;
        cin >> x >> y;
        a[i] = make_pair(x,y);
    }
    sort(begin(a),end(a));
    int j = 0;
    ll ans = k;
    while(j < n && a[j].first <= ans){
        ans += a[j].second;
        j++;
    }
    cout << ans << endl;
    return 0;
}