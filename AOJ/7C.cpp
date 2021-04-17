#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

/* Tree Walk */
#define MAX 100000
#define NIL -1

struct Node{ int p, l, r; };
struct Node T[MAX];
int n;

/* 先行順巡回 */
void preParese(int u){
    if(u == NIL) return ;
    printf(" %d", u);
    preParese(T[u].l);
    preParese(T[u].r);
}

/* 中間順巡回 */
void inParse(int u){
    if(u == NIL) return;
    inParse(T[u].l);
    printf(" %d", u);
    inParse(T[u].r);
}

/*後行順巡回 */
void postParse(int u){
    if(u == NIL) return;
    postParse(T[u].l);
    postParse(T[u].r);
    printf(" %d", u);
}

int main(){
    int i, v, l, r, root;
    scanf("%d", &n);
    rep(i,n) T[i].p = NIL;
    rep(i,n){
        scanf("%d %d %d", &v, &l, &r);
        T[v].l = l;
        T[v].r = r;
        if(l != NIL) T[l].p = v;
        if(r != NIL) T[r].p = v;
    }
    rep(i,n) if(T[i].p == NIL) root = i;
    printf("Preorder\n");
    preParese(root);
    printf("\n");
    printf("Inorder\n");
    inParse(root);
    printf("\n");
    printf("Postorder\n") ;
    postParse(root);
    printf("\n");
    return 0;
}