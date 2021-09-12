#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    ll n;
    cin >> n;
    ll ans = 0;
    for(int i = 0; i < n; i++){
        ll a, b;
        cin >> a >> b;
        ll sumB = b*(b+1)/2;
        ll sumA = (a-1)*(a)/2;
        ans += (sumB-sumA);
    }
    cout << ans << endl;
    return 0;
}