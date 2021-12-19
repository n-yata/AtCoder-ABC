#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    int n;
    ll k;
    ll x,y;
    vector<pair<ll,ll>> a;
    cin >> n >> k;
    rep(i,n){
        cin >> x >> y;
        a.push_back({x,y});
    } 
    sort(a.begin(),a.end());
    rep(i,n){
        if(a[i].first > k) break;
        k += a[i].second;
    }
    cout << k << endl;
    return 0;
}