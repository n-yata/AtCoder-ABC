#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    ll i1 = a*c;
    ll i2 = a*d;
    ll i3 = b*c;
    ll i4 = b*d;
    ll ans = max({i1, i2, i3, i4});

    cout << ans << endl;
}