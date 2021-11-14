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
    vector<int> s(n);
    rep(i,n) cin >> s[i];
    int ans = 0;
    for(int i = 0; i < n; i++){
        bool flg = false;
        for(int a = 1; a <= 1000; a++)for(int b = 1; b <= 1000; b++){
            if(4*a*b+3*a+3*b == s[i]){ flg = true; break; }
        }
        if(!flg) ans++;
    }
    cout << ans << endl;
    return 0;
}