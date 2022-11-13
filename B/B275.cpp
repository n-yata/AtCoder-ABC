#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define repn(i,num,n) for (int i = num; i < (n); ++i)
#define PI 3.14159265359
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 998244353;

int main(){
    ll a,b,c,d,e,f;
    ll x,y,ans;
    cin >> a >> b >> c >> d >> e >> f;
    a %= MOD;
    b %= MOD;
    c %= MOD;
    d %= MOD;
    e %= MOD;
    f %= MOD;
    x = (a*b)%MOD;
    x = (x*c)%MOD;
    y = (d*e)%MOD;
    y = (y*f)%MOD;
    ans = (x+MOD-y)%MOD;
    cout << ans << endl;
    return 0;
}