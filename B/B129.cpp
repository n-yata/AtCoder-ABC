#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<int> w(n);
    int sm = 0;
    rep(i,n) cin >> w[i], sm += w[i];
    int mn = 1e9;
    int t = 0;
    rep(i,n){
        t += w[i];
        sm -= w[i];
        mn = min(mn, abs(t-sm));
    }
    cout << mn << endl;
    return 0;
}