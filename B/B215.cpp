#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    ll n;
    cin >> n;
    ll ans = 1;
    for(ll i = 0; i <= 60; i++){
        if(ans > n){
            cout << i-1 << endl;
            break;
        } 
        ans *= 2;
    }
    return 0;
}