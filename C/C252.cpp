#include <bits/stdc++.h>
using namespace std;
#define rep(i,num,n) for (int i = num; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    int n;
    cin >> n;
    string s[100];
    vector<vector<int>> cnt(10,vector<int>(10));
    int ans, mx;
    rep(i,0,n) cin >> s[i];
    rep(i,0,n)rep(j,0,10)cnt[s[i][j]-'0'][j]++;
    ans = 1000;
    rep(i,0,10){
        mx = 0;
        rep(j,0,10) mx = max(mx,10*(cnt[i][j]-1)+j);
        ans = min(ans,mx);
    }
    cout << ans << endl;
    return 0;
}