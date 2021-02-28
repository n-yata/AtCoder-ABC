#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const int INF = 1001001001;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    int m = INF;
    int ans = -1001001001;
    for(int i = 0; i < n-1; ++i){
        m = min(m, a[i]);
        ans = max(ans, a[i+1]-m);
    }
    cout << ans << endl;
    return 0;
}