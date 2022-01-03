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
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    vector<int> order(n);
    iota(order.begin(),order.end(),0);
    sort(order.begin(),order.end(),[&](int i, int j){return a[i] < a[j];});
    vector<ll> ans(n,k/n);
    rep(i,k%n) ans[order[i]]++;
    for(auto &x : ans) cout << x << endl;
    return 0;
}