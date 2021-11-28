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
    vector<int> t(n);
    vector<vector<int>> a(n);
    rep(i,n){
        int k;
        cin >> t[i] >> k;
        a[i] = vector<int>(k);
        rep(j,k){
            cin >> a[i][j];
            a[i][j]--;
        }
    }
    vector<bool> need(n);
    need[n-1] = true;
    for(int i = n-1; i >= 0; --i){
        if(need[i]){
            for(int j : a[i]) need[j] = true;
        }
    }
    ll ans = 0;
    rep(i,n) if(need[i]) ans += t[i];
    cout << ans << endl;
    return 0;
}