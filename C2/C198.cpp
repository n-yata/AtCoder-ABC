#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    ll r,x,y;
    cin >> r >> x >> y;
    ll d2 = x*x+y*y;
    ll ans = 1;
    while(1){
        if(r*r*ans*ans >= d2) break;
        ++ans;
    }
    if(ans == 1){
        if(r*r != d2) ans = 2;
    }
    cout << ans << endl;
    return 0;
}