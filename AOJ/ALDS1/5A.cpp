#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

/* 全探索 */
int n, q;
vector<int> a(2000);

bool solve(int i, int m){
    if(m == 0) return 1;
    if(i >= n) return 0;
    bool res = solve(i+1, m) || solve(i+1, m-a[i]);
    return res;
}

int main(){
    cin >> n;
    rep(i,n) cin >> a[i];
    cin >> q;
    vector<int> m(q);
    rep(i,q) cin >> m[i];
    rep(i,q){
        bool ans = solve(0, m[i]);
        if(ans) cout << "yes" << endl;
        else cout << "no" << endl;
    }
    return 0;
}