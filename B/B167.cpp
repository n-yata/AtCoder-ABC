#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int a,b,c,k;
    cin >> a >> b >> c >> k;
    int ans = 0;
    if(k-a > 0){
        ans += a;
        k -= a;
    } else {
        cout << k << endl;
        return 0;
    }
    if(k-b > 0){
        k -= b;
    }else{
        cout << ans << endl;
        return 0;
    }
    if(k-c > 0){
        ans -= c;
        cout << ans << endl;
    }else{
        ans -= k;
        cout << ans << endl;
    }
    return 0;
}