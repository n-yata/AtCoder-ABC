#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<ll> l(n);
    rep(i,n) cin >> l[i];
    ll ans = 0;
    for(ll i = 0; i < n; i++){
        for(ll j = i+1; j < n; j++){
            for(ll k = j+1; k < n; k++){
                if(l[i] == l[j]) continue;
                if(l[j] == l[k]) continue;
                if(l[k] == l[i]) continue;
                ll maxNum = max({l[i], l[j], l[k]});
                ll sumNum;
                if(maxNum == l[i]) sumNum = l[j]+l[k];
                if(maxNum == l[j]) sumNum = l[i]+l[k];
                if(maxNum == l[k]) sumNum = l[i]+l[j];
                if(sumNum <= maxNum) continue;
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}