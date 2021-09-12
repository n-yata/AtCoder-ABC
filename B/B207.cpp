#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    ll a,b,c,d;
    cin >> a >> b >> c >> d;
    ll e = c*d-b;
    if(e <= 0) cout << -1 << endl;
    else{
        // 切り上げが答え
        ll ans = (a+e-1)/e;
        cout << ans << endl;
    }
    return 0;
}