#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

#define MAX 100005
#define NIL -1

struct Node{ int p, l, r; };

Node T[MAX];
int n, D[MAX];

void print(int u){
    int i, c;
    cout << "node " << u << ": ";
    cout << "parent = " << T[u].p << ", ";
    cout << "depth = " << D[u] << ", ";

    if(T[u].p == NIL) cout << "root, ";
    else if(T[u].l == NIL) cout << "leaf, ";
    else cout << "internal node, ";

    cout << "[";

    for(i = 0, c = T[u].l; c != NIL; i++, c = T[c].r){
        if(i) cout << ", ";
        cout << c;
    }
    cout <<  "]" << endl;
}

// 再帰的に深さを求める
void rec(int u, int p){
    D[u] = p;
    if(T[u].r != NIL) rec(T[u].r, p); // 右の兄弟に同じ深さを設定
    if(T[u].l != NIL) rec(T[u].l, p+1); // 最も左の個に自分の深さ+1を設定
}

int main(){
    int i, j, d, v, c, l, r;
    cin >> n;
    rep(i,n) T[i].p = T[i].l = T[i].r = NIL;
    rep(i,n){
        cin >> v >> d;
        rep(j,d){
            cin >> c;
            if(j == 0) T[v].l = c;
            else T[l].r = c;
            l = c;
            T[c].p = v;
        }
    }
    rep(i,n) if(T[i].p == NIL) r = i;
    rec(r, 0);
    rep(i,n) print(i);
    return 0;
}