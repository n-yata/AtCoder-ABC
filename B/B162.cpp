#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n;
    cin >> n;
    ll ans = 0;
    for(int i = 1; i <= n; i++){
        if(i%3 == 0) continue;
        if(i%5 == 0) continue;
        ans += i;
    }
    cout << ans << endl;
    return 0;
}