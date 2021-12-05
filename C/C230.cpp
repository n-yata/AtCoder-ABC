#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    ll n,a,b,p,q,r,s;
    cin >> n >> a >> b >> p >> q >> r >> s;
    ll x,y;
    string str = "";
    vector<string> ans;
    for(ll i = 0; i < (s-r+1); i++) str += '.';
    for(ll i = 0; i < (q-p+1); i++) ans.push_back(str);
    x = max(p-a,r-b);
    y = min(q-a,s-b);
    for(ll i = x; i <= y; i++) ans[a+i-p][b+i-r] = '#';
    x = max(p-a,b-s);
    y = min(q-a,b-r);
    for(ll i = x; i <= y; i++) ans[a+i-p][b-i-r] = '#';
    for(ll i = 0; i < (q-p+1); i++) cout << ans[i] << endl;
    return 0;
}