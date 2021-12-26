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
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    vector<int> d(MaxA*2+1);
    rep(i,n) d[MaxA+a[i]]++;
    ll ans = 0;
    rep(ai,d.size()){
        rep(aj,ai){
            ll x = ai-aj;
            ans += x*x*d[ai]*d[aj];
        }
    }
    cout << ans << endl;
    return 0;
}