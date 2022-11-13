#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define repn(i,num,n) for (int i = num; i < (n); ++i)
#define PI 3.14159265359
using ll = long long;

int main(){
    ll a,b,k;
    cin >> a >> b >> k;
    ll ans = 0;
    while(1){
        if(b <= a) break;
        a *= k;
        ans++;
    }
    cout << ans << endl;
    return 0;
}