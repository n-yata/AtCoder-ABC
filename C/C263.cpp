#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define repn(i,num,n) for (int i = num; i < (n); ++i)
#define PI 3.14159265359
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

vector<vector<int>> dp[10][10];

void solve(int n, int m){
    if(dp[n][m].size()) return;
    if(n == 1){
        repn(i,1,m+1) dp[n][m].push_back({i});
    }else{
        repn(k,1,m+1){
            if(n-1 <= k-1){
                solve(n-1,k-1);
                rep(i,dp[n-1][k-1].size()){
                    vector<int> a = dp[n-1][k-1][i];
                    a.push_back(k);
                    dp[n][m].push_back(a);
                }
            }
        }
    }
}

int main(){
    int n,m;
    cin >> n >> m;
    solve(n,m);
    sort(dp[n][m].begin(),dp[n][m].end());
    rep(i,dp[n][m].size()){
        rep(j,n) cout << dp[n][m][i][j] << " ";
        cout << endl;
    }
    return 0;
}