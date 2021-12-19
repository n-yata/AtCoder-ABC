#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

string c[6];
string c2[6];

int main(){
    int h,w,k;
    cin >> h >> w >> k;
    rep(y,h) cin >> c[y];
    int ans = 0;
    rep(mskH,1<<h)rep(mskW,1<<w){
        rep(y,h) c2[y] = c[y];
        rep(y,h) if(mskH & (1<<y)) rep(x,w) c2[y][x] = 'R';
        rep(x,w) if(mskW & (1<<x)) rep(y,h) c2[y][x] = 'R';
        int cnt = 0;
        rep(x,w)rep(y,h) if(c2[y][x] == '#') cnt++;
        if(cnt == k) ans++;
    }
    cout << ans << endl;
    return 0;
}