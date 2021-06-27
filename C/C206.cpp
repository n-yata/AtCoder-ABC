#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    map<int, int> m;
    ll ans = 0;
    rep(j,n){
        ans += j-m[a[j]];
        m[a[j]]++;
    }
    cout << ans << endl;
    return 0;
}