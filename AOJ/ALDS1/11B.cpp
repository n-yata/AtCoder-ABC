#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

static const int N = 100;
static const int WHITE = 0;
static const int GRAY = 1;
static const int BLACK = 2;

int n, M[N][N];
int color[N], d[N], f[N], tt;
int nt[N];

// uに隣接するvを番号順に取得
int next(int u){
    for(int v = nt[u]; v < n; v++){
        nt[u] = v+1;
        if(M[u][v]) return v;
    }
    return -1;
}

// スタックを用いた深さ優先探索
void dfs_visit(int r){
    rep(i,n) nt[i] = 0;
    stack<int> S;
    S.push(r);
    color[r] = GRAY;
    d[r] = ++tt;
    while(!S.empty()){
        int u = S.top();
        int v = next(u);
        if(v != -1){
            if(color[v] == WHITE){
                color[v] = GRAY;
                d[v] = ++tt;
                S.push(v);
            }
        }else{
            S.pop();
            color[u] = BLACK;
            f[u] = ++tt;
        }
    }
}

void dfs(){
    // 初期化
    rep(i,n){
        color[i] = WHITE;
        nt[i] = 0;
    }
    tt = 0;

    // 未訪問のuを始点として深さ優先探索
    rep(u,n){
        if(color[u] == WHITE) dfs_visit(u);
    }
    rep(i,n){
        cout << i+1 << " " << d[i] << " " << f[i] << endl;
    }
}

int main(){
    int u, k, v;
    cin >> n;
    rep(i,n)rep(j,n) M[i][j] = 0;
    rep(i,n){
        cin >> u >> k;
        u--;
        rep(j,k){
            cin >> v;
            v--;
            M[u][v] = 1;
        }
    }
    dfs();
    return 0;
}