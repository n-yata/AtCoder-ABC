#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
static const int N = 100;

int main(){
    int M[N][N]; // 0オリジンの隣接行列
    int n, u, k, v;
    cin >> n;
    rep(i,n)rep(j,n) M[i][j] = 0;
    rep(i,n){
        cin >> u >> k;
        u--; // 0オリジンへ変換
        rep(j,k){
            cin >> v;
            v--; // 0オリジンへ変換
            M[u][v] = 1; // uとvの間に辺を張る
        }
    }
    rep(i,n){
        rep(j,n){
            if(j) cout << " ";
            cout << M[i][j];
        }
    cout << endl;
    }
    return 0;
}