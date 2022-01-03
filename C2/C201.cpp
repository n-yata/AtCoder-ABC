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
    int ans = 0;
    rep(num,10000){
        vector<int> a(10);
        int x = num;
        rep(i,4){
            int d = x%10;
            a[d] = 1;
            x /= 10;
        }
        bool ok = true;
        rep(i,10){
            if(s[i] == 'o' && a[i] != 1) ok = false;
            if(s[i] == 'x' && a[i] != 0) ok = false;
        }
        if(ok) ans++;
    }
    cout << ans << endl;
    return 0;
}