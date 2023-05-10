#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define repn(i,num,n) for (int i = num; i < (n); ++i)
#define PI 3.14159265359
using ll = long long;
using P = pair<int,int>;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    int n,t;
    cin >> n >> t;
    vector<int> c(n),r(n);
    rep(i,n) cin >> c[i];
    rep(i,n) cin >> r[i];
    pair<int,int> tmax = {-1,-1},lmax = {-1,-1};
    rep(i,n){
        if(c[i] == t) tmax = max(tmax, {r[i], i});
        if(c[i] == c[0]) lmax = max(lmax, {r[i], i});
    }
    if(tmax.first != -1) cout << tmax.second + 1 << endl;
    else cout << lmax.second + 1 << endl;
    return 0;
}