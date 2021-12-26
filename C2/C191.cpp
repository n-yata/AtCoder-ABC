#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    int h,w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i,h) cin >> s[i];
    int ans = 0;
    rep(i,h-1)rep(j,w-1){
        int cnt = 0;
        rep(di,2)rep(dj,2) if(s[i+di][j+dj] == '#') cnt++;
        if(cnt == 1 || cnt == 3) ans++;
    }
    cout << ans << endl;
    return 0;
}