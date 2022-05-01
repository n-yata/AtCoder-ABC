#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

string resolve(ll n){
    string r;
    while(n != 0){
        r += (n%2 == 0 ? "0":"2");
        n /= 2;
    }
    reverse(r.begin(),r.end());
    return r;
}

int main(){
    ll k;
    cin >> k;
    cout << resolve(k) << endl;
    return 0;
}