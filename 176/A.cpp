#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n, x, t;
    cin >> n >> x >> t;
    int ans = (n/x)*t;
    if(n%x > 0) ans += t;
    cout << ans << endl;
    return 0;
}