#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;

int main(){
    int n, x;
    cin >> n >> x;
    x *= 100;
    vector<int> v(n), p(n);
    rep(i,n) cin >> v[i] >> p[i];
    int ans = 0;
    rep(i,n){
        ans++;
        x -= v[i]*p[i];
        if(x < 0){
            cout << ans << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}