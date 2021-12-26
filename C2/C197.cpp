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
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    int ans = 1<<30;
    rep(s,1<<(n-1)){
        int now = 0;
        int o = 0;
        rep(i,n){
            o |= a[i];
            if(s>>i&1){
                now ^= o;
                o = 0;
            }
        }
        now ^= o;
        ans = min(ans,now);
    }
    cout << ans << endl;
    return 0;
}