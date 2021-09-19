#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

const ll MX = 1e18;

int main(){
    int n;
    cin >> n;
    ll ans = 1;
    bool ng = false;
    rep(i,n){
        ll a;
        cin >> a;
        if(a == 0){
            cout << 0 << endl;
            return 0;
        }
        if(ng || MX/ans < a){
            ng = true;
        }
        ans *= a;
    }
    if(ng) cout << -1 << endl;
    else cout << ans << endl;
    return 0;
}