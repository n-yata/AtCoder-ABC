#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    int n,m,k;
    cin >> n >> m;
    vector<int> a(m),b(m);
    rep(i,m) cin >> a[i] >> b[i];
    cin >> k;
    vector<int> c(k),d(k);
    rep(i,k) cin >> c[i] >> d[i];
    int ans = 0;
    for(int bit = 0; bit < 1 << k; bit++){
        vector<bool> ball(n);
        rep(i,k){
            ball[bit&1 << i ? c[i] : d[i]] = 1;
        }
        int cnt = 0;
        rep(i,m) if(ball[a[i]] && ball[b[i]]) cnt++;
        if(ans < cnt) ans = cnt;
    }
    cout << ans << endl;
    return 0;
}