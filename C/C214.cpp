#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define all(x) (x).begin(),(x).end()
using ll = long long;

template<class t> inline bool chmax(t& a, t b) { if (a < b) { a = b; return 1; } return 0; }
template<class t> inline bool chmin(t& a, t b) { if (a > b) { a = b; return 1; } return 0; }

const ll inf = 1ll<<60;
const ll mod = 1'000'000'007;

int N,S[201010],T[201010];
int ans[201010];

int main(){
    cin >> N;
    rep(i,N) cin >> S[i];
    rep(i,N) cin >> T[i];
    
    int mi = 1e9;
    rep(i,N){
        chmin(mi,T[i]);
        ans[i] = mi;
        mi += S[i];
    }
    rep(i,N){
        chmin(mi,T[i]);
        chmin(ans[i], mi);
        mi += S[i];
    }
    rep(i,N) cout << ans[i] << endl;
    return 0;
}