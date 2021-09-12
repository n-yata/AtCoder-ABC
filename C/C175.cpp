#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    ll x, k, d;
    cin >> x >> k >> d;
    x = abs(x);
    ll ans = 0;
    if(x/d > k){
        ans = x-d*k;
    }else{
        ll e = x/d;
        k -= e;
        x -= e*d;
        if(k%2 == 1) x = abs(x-d);
        ans = x;
    }
    cout << ans << endl;
    return 0;
}