#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define repn(i,num,n) for (int i = num; i < (n); ++i)
#define PI 3.14159265359
using ll = long long;
using P = pair<int,int>;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    int n,m,d;
    cin >> n >> m >> d;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    ll dp[n+1][m+1][d];
    rep(i,n+1)rep(j,m+1)rep(k,d) dp[i][j][k] = -1;
    dp[0][0][0] = 0;
    rep(i,n)rep(j,m+1)rep(k,d){
        if(dp[i][j][k] == -1) continue;
        dp[i+1][j][k] = max(dp[i+1][j][k],dp[i][j][k]);
        if(j != m){
            dp[i+1][j+1][(k+a[i])%d] = max(dp[i+1][j+1][(k+a[i])%d], dp[i][j][k]+a[i]);
        }
    }
    cout << dp[n][m][0] << '\n';
    return 0;
}