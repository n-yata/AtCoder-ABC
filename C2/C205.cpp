#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

string solve(ll a, ll b){
    if(a > b) return ">";
    if(a < b) return "<";
    return "=";
}

int main(){
    ll a,b,c;
    cin >> a >> b >> c;
    if(c%2 != 0){
       cout << solve(a,b) << endl;
       return 0;
    }
    ll aa = abs(a);
    ll bb = abs(b);
    cout << solve(aa,bb);
    return 0;
}