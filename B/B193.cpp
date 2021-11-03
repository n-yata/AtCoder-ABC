#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const int INF = 1001001001;

int main(){
    int n;
    cin >> n;
    int a, p, x;
    int ans = INF;
    rep(i,n){
        cin >> a >> p >> x;
        if(x-a > 0) ans = min(ans, p);
    }
    if(ans == INF) ans = -1;
    cout << ans << endl;
    return 0;
}