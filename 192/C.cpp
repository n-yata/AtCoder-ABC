#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;

int solve(int i){
    string s = to_string(i);
    sort(s.rbegin(), s.rend());
    int g1 = stoi(s);
    sort(s.begin(), s.end());
    int g2 = stoi(s);
    return g1-g2;
}

int main(){
    int n, k;
    cin >> n >> k;
    int ans = n;
    rep(i,k) ans = solve(ans);
    cout << ans << endl;
    return 0;
}