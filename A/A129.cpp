#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int p, q, r;
    cin >> p >> q >> r;
    int ans = min({p, q, r});
    if(ans == p) ans += min(q,r);
    else if(ans == q) ans += min(p,r);
    else ans += min(q,p);
    cout << ans << endl;
    return 0;
}