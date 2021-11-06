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
    string s = to_string(n);
    int x = 0;
    rep(i,s.size()){
        x += s[i]-'0';
    }
    if(n%x == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}