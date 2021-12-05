#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define all(x) (x).begin(),(x).end()
using ll = long long;

template<class t> inline bool chmax(t& a, t b) { if (a < b) { a = b; return 1; } return 0; }
template<class t> inline bool chmin(t& a, t b) { if (a > b) { a = b; return 1; } return 0; }

const ll inf = 1ll<<60;
const ll mod = 1'000'000'007;

int main(){
    ll n,x;
    cin >> n;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];
    cin >> x;
    ll sumA = 0;
    for(ll val : a) sumA += val;
    ll p = x/sumA;
    ll sumB = p*sumA;
    ll ans = p*n;
    for(ll val : a){
        sumB += val;
        ans++;
        if(sumB > x)break;
    }
    cout << ans << endl;
    return 0;
}