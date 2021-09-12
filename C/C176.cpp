#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];
    ll minN = a[0];
    ll ans = 0;
    for(int i = 1; i < n; i++){
        if(a[i] < minN)ans += minN-a[i];
        else minN = a[i];
    }
    cout << ans << endl;
    return 0;
}