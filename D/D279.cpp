#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define repn(i,num,n) for (int i = num; i < (n); ++i)
#define PI 3.14159265359
using ll = long long;
using P = pair<int,int>;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    double a,b;
    cin >> a >> b;
    auto f = [&](ll n) -> double {
        return a/sqrt(n+1)+b*n;
    };
    ll l = 0, r = a/b;
    while(r-l > 2){
        ll m1 = (l*2+r)/3;
        ll m2 = (l+r*2)/3;
        if(f(m1) > f(m2)) l = m1;
        else r = m2;
    }
    double ans = a;
    for(ll i = l; i <= r; i++){
        ans = min(ans, f(i));
    }
    printf("%.10f\n",ans);
    return 0;
}