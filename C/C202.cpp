#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<int> a(n), b(n), c(n);
    rep(i,n) cin >> a[i];
    rep(i,n) cin >> b[i];
    rep(i,n) cin >> c[i];
    vector<int> bc;
    rep(i,n) bc.push_back(b[c[i]-1]);
    vector<int> aidx(n+1), bidx(n+1);
    rep(i,n){
        aidx[a[i]]++;
        bidx[bc[i]]++;
    }
    ll ans = 0;
    for(int i = 1; i <= n; i++){
        if(aidx[i] > 0 && bidx[i] > 0) ans += (ll)aidx[i]*bidx[i];
    }
    cout << ans << endl;
    return 0;
}