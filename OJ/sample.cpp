#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    int n = 10;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    sort(a.rbegin(), a.rend());
    rep(i,3) cout << a[i] << " ";
    cout << endl;
    return 0;
}