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
    int n,q;
    cin >> n >> q;
    vector<vector<int>> a(n);
    rep(i,n){
        int l;
        cin >> l;
        a[i] = vector<int>(l);
        rep(j,l) cin >> a[i][j];
    }
    rep(i,q){
        int s,t;
        cin >> s >> t;
        s--; t--;
        cout << a[s][t] << endl;
    }
    return 0;
}