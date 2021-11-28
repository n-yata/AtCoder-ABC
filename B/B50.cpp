#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    int n,m;
    cin >> n;
    vector<int> t(n);
    rep(i,n) cin >> t[i];
    cin >> m;
    vector<int> p(m),x(m);
    rep(i,m) cin >> p[i] >> x[i];
    rep(i,m){
        int ans = 0;
        rep(j,n){
            if(j == p[i]-1){
                ans += x[i];
                continue;
            }
            ans += t[j];
        }
        cout << ans << endl;
    }
    return 0;
}