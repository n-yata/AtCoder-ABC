#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;

ll a[100010][3];
ll dp[100010][3];

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < 3; ++j){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < 3; ++j){
            for(int k = 0; k < 3; ++k){
                if(j == k) continue;
                chmax(dp[i+1][k], dp[i][j]+a[i][k]);
            }
        }
    }
    ll ans = 0;
    rep(i,3) chmax(ans, dp[n][i]);
    cout << ans << endl;
    return 0;
}