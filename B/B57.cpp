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
    vector<int> a(n),b(n);
    vector<int> c(m),d(m);
    rep(i,n) cin >> a[i] >> b[i];
    rep(i,m) cin >> c[i] >> d[i];
    rep(i,n){
        int minP = 1e9;
        int ansP = 51;
        rep(j,m){
            int p = abs(a[i]-c[j])+abs(b[i]-d[j]);
            if(minP == p) continue;
            minP = min(minP,p);
            if(minP == p) ansP = j+1;
        }
        cout << ansP << endl;
    }
    return 0;
}