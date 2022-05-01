#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

const ll MIN = -2147483648;
const ll MAX = 2147483648;

int main(){
    ll n;
    cin >> n;
    if(MIN <= n && n < MAX) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}