#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int a[100][100];

int main(){
    int h, w;
    cin >> h >> w;
    int minN = 100;
    rep(i,h) rep(j,w){
        cin >> a[i][j];
        chmin(minN, a[i][j]);
    }
    int ans = 0;
    rep(i,h) rep(j,w) ans += a[i][j]-minN;
    cout << ans << endl;
    return 0;
}