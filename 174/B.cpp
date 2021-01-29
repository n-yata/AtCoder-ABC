#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    double n, d;
    cin >> n >> d;
    vector<double> x(n);
    vector<double> y(n);
    rep(i,n) cin >> x[i] >> y[i];
    int ans = 0;
    rep(i,n){
        if(sqrt(x[i]*x[i]+y[i]*y[i]) <= d) ans++;
    }
    cout << ans << endl;
    return 0;
}