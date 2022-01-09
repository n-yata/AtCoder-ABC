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
    vector<int> s(n),t(n);
    rep(i,n) cin >> s[i];
    rep(i,n) cin >> t[i];
    int mi = 1e9;
    vector<int> ans(n);
    rep(i,n){
        chmin(mi,t[i]);
        ans[i] = mi;
        mi += s[i];
    }
    rep(i,n){
        chmin(mi,t[i]);
        chmin(ans[i],mi);
        mi += s[i];
    }
    rep(i,n) cout << ans[i] << endl;
    return 0;
}