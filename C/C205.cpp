#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    ll a,b,c;
    cin >> a >> b >> c;
    if(c%2 == 0) c = 2;
    else c = 1;
    ll aa = pow(a,c);
    ll bb = pow(b,c);
    if(aa < bb) puts("<");
    else if(aa == bb) puts("=");
    else puts(">");
    return 0;
}