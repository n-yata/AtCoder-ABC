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
    cin >> n;
    vector<int> a(n-1),b(n-1);
    rep(i,n-1) cin >> a[i] >> b[i];
    map<int,int> m;
    rep(i,n-1) m[a[i]]++,m[b[i]]++;
    bool ans = false;
    rep(i,m.size()) if(m[i] == n-1) ans = true;
    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}