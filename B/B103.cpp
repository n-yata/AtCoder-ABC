#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    string s,t;
    cin >> s >> t;
    int n = s.length();
    rep(i,n){
        if(s == t){cout << "Yes" << endl; return 0;}
        s = s.substr(n-1) + s.substr(0,n-1);
    }
    cout << "No" << endl;
    return 0;
}