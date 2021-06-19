#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

/**
 * カンマが何個打たれるか
 * */
int main(){
    ll n;
    cin >> n;
    ll x = 1000;
    ll ans = 0;
    while(n >= x){
        ans += n-x+1;
        x *= 1000;
    }
    cout << ans << endl;
    return 0;
}