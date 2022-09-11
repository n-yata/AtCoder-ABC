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

int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<bool>> adj(n,vector<bool>(n));
    rep(i,m){
        int u,v;
        cin >> u >> v;
        u--,v--;
        adj[u][v] = adj[v][u] = true;
    }
    int ans = 0;
    rep(i,n)repn(j,i+1,n)repn(k,j+1,n){
        if(adj[i][j] && adj[j][k] && adj[k][i]) ans++;
    }
    cout << ans << endl;
    return 0;
}