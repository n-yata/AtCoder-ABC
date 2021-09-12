#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    ll n;
    cin >> n;
    set<ll> a;
    for(ll i = 1; i*i <= n; ++i){
        if(n%i == 0){
        a.insert(i);
        a.insert(n/i);
        }
    }
    for(ll i : a) cout << i << endl;
    return 0;
}