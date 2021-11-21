#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int x = max(a,c);
    int y = min(b,d);
    int ans = y-x;
    if(ans < 0) ans = 0;
    cout << ans << endl;
    return 0;
}