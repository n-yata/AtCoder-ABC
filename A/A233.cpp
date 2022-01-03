#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    int x,y;
    cin >> x >> y;
    y -= x;
    if(y%10 != 0) y += 10;
    int ans = y/10;
    if(ans < 0) ans = 0;
    cout << ans << endl;
    return 0;
}