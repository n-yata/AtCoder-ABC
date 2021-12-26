#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<bool>> x(n,vector<bool>(n)), y(n,vector<bool>(n));
    rep(i,m){
        int a,b;
        cin >> a >> b;
        a -= 1, b -= 1;
        x[a][b] = x[b][a] = true;
    }
    rep(i,m){
        int c,d;
        cin >> c >> d;
        c -= 1, d -= 1;
        y[c][d] = y[d][c] = true;
    }
    vector<int> p(n);
    iota(begin(p),end(p),0);
    int ans = 0;
    do{
        bool ok = true;
        rep(i,n)rep(j,n){
            if(x[i][j] != y[p[i]][p[j]]) ok = false;
        } 
        if(ok){puts("Yes"); return 0;} 
    }while(next_permutation(begin(p),end(p)));
    puts("No");
    return 0;
}