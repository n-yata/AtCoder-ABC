#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    int N,T;
    cin >> N >> T;
    vector<int> c(N), t(N);
    rep(i,N) cin >> c[i] >> t[i];
    int ans = 1e9;
    rep(i,N){
        if(t[i] <= T){
            ans = min(ans,c[i]);
        }
    }
    if(ans == 1e9){
        cout << "TLE" << endl;
        return 0;
    }
    cout << ans << endl;
    return 0;
}