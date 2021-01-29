#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<int> x(n);
    rep(i,n) cin >> x[i];

    ll m = 0;
    double u = 0;
    ll t = 0;

    for(ll xn : x){
        m += abs(xn);
        u += abs(xn)*abs(xn);
        t = max(t, abs(xn));
    }

    cout << m << endl;
    printf("%.15f\n", sqrt(u));
    cout << t << endl;
}