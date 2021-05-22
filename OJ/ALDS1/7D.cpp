#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

/* Reconstruction of the Tree */
int n, pos;
vector<int> pre, in, post;

void rec(int l, int r){
    if(l >= r) return;
    int root = pre[pos++];
    int m = distance(in.begin(), find(in.begin(), in.end(), root));
    rec(l,m);
    rec(m+1, r);
    post.push_back(root);
}

void solve(){
    pos = 0;
    rec(0, pre.size());
    rep(i,n){
        if(i) cout << " ";
        cout << post[i];
    }
    cout << endl;
}
int main(){
    int k;
    cin >> n;
    rep(i,n){
        cin >> k;
        pre.push_back(k);
    }
    rep(i,n){
        cin >> k;
        in.push_back(k);
    }
    solve();
    return 0;
}