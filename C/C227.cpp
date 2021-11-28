#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    ll n;
    cin >> n;
    ll ans = 0;
    for(ll a = 1; a*a*a <= n; a++)for(ll b = a; a*b*b <= n; b++){
        ans += n/a/b-b+1;
    } 
    cout << ans << endl;
    return 0;
}