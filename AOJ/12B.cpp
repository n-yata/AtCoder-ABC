#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
static const int MAX = 100;
static const int INFTY = (1<<21);
static const int WHITE = 0;
static const int GRAY = 1;
static const int BLACK = 2;

int n, M[MAX][MAX];

void dijkstra(){
    int minv;
    int d[MAX], color[MAX];
    
    rep(i,n){
        d[i] = INFTY;
        color[i] = WHITE;
    }
    d[0] = 0;
    color[0] = GRAY;
    while(1){
        minv = INFTY;
        int u = -1;
        rep(i,n){
            if(minv > d[i] && color[i] != BLACK){
                u = i;
                minv = d[i];
            }
        }
        if(u == -1) break;
        color[u] = BLACK;
        rep(v,n){
            if(color[v] != BLACK && M[u][v] != INFTY){
                if(d[v] > d[u] + M[u][v]){
                    d[v] = d[u]+M[u][v];
                    color[v] = GRAY;
                }
            }
        }
    }
    rep(i,n) cout << i << " " << (d[i] == INFTY ? -1 : d[i]) << endl;
}

int main(){
    cin >> n;
    rep(i,n)rep(j,n) M[i][j] = INFTY;
    int k, c, u, v;
    rep(i,n){
        cin >> u >> k;
        rep(j,k){
            cin >> v >> c;
            M[u][v] = c;
        }
    }
    dijkstra();
    return 0;
}