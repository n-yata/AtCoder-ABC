#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    string s;
    cin >> s;
    int ans = 3;
    if(s[0] == s[1] && s[1] == s[2]) ans = 1;
    else if(s[0] != s[1] && s[1] != s[2] && s[2] != s[0]) ans = 6;
    cout << ans;
    return 0;
}