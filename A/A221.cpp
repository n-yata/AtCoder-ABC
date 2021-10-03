#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int a, b;
    cin >> a >> b;
    ll ans = 1;
    rep(i,a-b) ans *= 32;
    cout << ans << endl;
    return 0;
}