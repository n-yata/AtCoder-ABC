#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<int> v(n),c(n);
    rep(i,n) cin >> v[i];
    rep(i,n) cin >> c[i];
    vector<int> xy(n);
    rep(i,n) xy[i] = v[i]-c[i];
    int ans = 0;
    rep(i,n) if(xy[i] > 0) ans += xy[i];
    cout << ans << endl;
    return 0;
}