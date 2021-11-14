#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    int a,b,c;
    int k;
    cin >> a >> b >> c >> k;
    int x = max({a,b,c});
    int y;
    int ans = 0;
    if(x == a){ y = a; ans = b+c; }
    if(x == b){ y = b; ans = a+c; }
    if(x == c){ y = c; ans = a+b; }
    rep(i,k){
        y *= 2;
    }
    cout << ans+y << endl;
    return 0;
}