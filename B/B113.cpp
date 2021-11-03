#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    int n,t,a;
    cin >> n >> t >> a;
    vector<int> h(n);
    rep(i,n) cin >> h[i];
    double x = 1e9;
    int ans = 0;
    rep(i,n){
        double y = abs(a-(t-h[i]*0.006));
        x = min(x,y);
        if(x == y) ans = i+1;
    }
    cout << ans << endl;
    return 0;
}