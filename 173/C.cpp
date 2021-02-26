#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    int h, w, k;
    cin >> h >> w >> k;
    vector<string> s(h);
    rep(i,h) cin >> s[i];
    int ans = 0;
    rep(is,1<<h)rep(js,1<<w){
        int cnt = 0;
        rep(i,h)rep(j,w){
            if(is>>i&1) continue;
            if(js>>j&1) continue;
            if(s[i][j] == '#') cnt++;
        }
        if(cnt == k) ans++;
    }
    cout << ans << endl;
    return 0;
}