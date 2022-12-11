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
    ll k;
    cin >> k;
    ll ans = 1;
    for(ll p = 2; (p*p) <= k; p++){
        ll a = 0;
        while(k%p == 0) k /= p, a++;
        ll n = 0;
        while(a > 0){
            n += p;
            ll x = n;
            while(x%p == 0) x /= p, a--;
        }
        ans = max(ans,n);
    }
    ans = max(ans,k);
    cout << ans << endl;
    return 0;
}