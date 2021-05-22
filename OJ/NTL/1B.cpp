#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

ll power(ll x, ll n, ll M){
    ll res = 1;
    if(n > 0){
        res = power(x, n/2, M);
        if(n%2 == 0) res = (res*res)%M;
        else res = (((res*res)%M)*x)%M;
    }
    return res;
}

main(){
    int m, n;
    cin >> m >> n;
    cout << power(m, n, 1000000007) << endl;
    return 0;
}