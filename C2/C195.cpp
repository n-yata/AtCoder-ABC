#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;
const int MaxA = 200;

int main(){
    ll n;
    cin >> n;
    ll x = 1000;
    ll ans = 0;
    while(n >= x){
        ans += n-x+1;
        x *= 1000;
    }
    cout << ans << endl;
    return 0;
}