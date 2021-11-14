#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    int n,x;
    cin >> n >> x;
    vector<int> m(n);
    rep(i,n) cin >> m[i];
    int ans = 0;
    int y = 1e9;
    rep(i,n){
        x -= m[i];
        ans++;
        y = min(y,m[i]);
    }
    while(1){
        x -= y;
        if(x < 0) break;
        ans++;
    }
    cout << ans << endl;
    return 0;
}