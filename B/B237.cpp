#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    int h,w;
    cin >> h >> w;
    vector<vector<int>> a(h,vector<int>(w));
    rep(i,h)rep(j,w) cin >> a[i][j];
    rep(j,w){
        rep(i,h){
            cout << a[i][j];
            if(i < h-1) cout << " ";
        }
        cout << endl;
    }
    return 0;
}