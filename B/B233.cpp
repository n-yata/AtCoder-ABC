#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    int l,r;
    string s;
    cin >> l >> r >> s;
    string ss = s.substr(l-1,r-l+1);
    reverse(ss.begin(),ss.end());
    string ans = s.substr(0,l-1) + ss + s.substr(r);
    cout << ans << endl;
    return 0;
}