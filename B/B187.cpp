#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<double> x(n);
    vector<double> y(n);
    rep(i,n) cin >> x[i] >> y[i];   
    int ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            double d = (y[j]-y[i])/(x[j]-x[i]);
            if(-1 <= d && d <= 1) ans++;
        }
    }
    cout << ans << endl;
    return 0;
}