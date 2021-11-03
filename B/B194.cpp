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
    vector<int> a(n), b(n);
    rep(i,n) cin >> a[i] >> b[i];
    vector<int> c(n);
    rep(i,n) c[i] = a[i]+b[i];
    sort(c.begin(), c.end());
    int a1 = a[0];
    int b1 = b[0];
    int a2 = a[0];
    int b2 = b[0];
    int ans = 0;
    for(int i = 1; i < n; ++i){
        if(a1 > a[i]) a1 = a[i];
        else if(b1 > b[i]) b1 = b[i];
        if(a2 > a[i]) a2 = a[i];
        else if(b2 > b[i]) b2 = b[i];
    }
    ans = min({max(a1, b1), max(a2, b2), c[0]});
    cout << ans << endl;
    return 0;
}