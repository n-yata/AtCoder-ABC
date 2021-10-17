#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<double> a(n);
    rep(i,n) cin >> a[i];
    double up = 1;
    double down = 0;
    rep(i,n) down += 1.0/a[i];
    double ans = up/down;
    printf("%.10f\n", ans);
    return 0;
}