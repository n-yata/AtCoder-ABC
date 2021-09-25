#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    ll a,b,k;
    cin >> a >> b >> k;
    ll x = a-k;
    if(x >= 0) cout << x << " " << b << endl;
    else{
        ll y = b+x;
        if(y >= 0) cout << 0 << " " << y << endl;
        else cout << 0 << " " << 0 << endl;
    }
    return 0;
}