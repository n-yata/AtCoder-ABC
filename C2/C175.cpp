#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    ll x,k,d;
    cin >> x >> k >> d;
    x = abs(x);
    ll straight = min(k,x/d);
    k -= straight;
    x -= straight*d;
    if(k%2 == 0) cout << x << endl;
    else cout << d-x << endl;
    return 0;
}