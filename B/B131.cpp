#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n,l;
    cin >> n >> l;
    vector<int> x(n);
    rep(i,n) x[i] = l+i;
    int s = 0;
    rep(i,n)  s+= x[i];
    int ans = 1e9;
    rep(i,n){
        int t = s-x[i];
        if(abs(t-s) < abs(ans-s)) ans = t;
    }
    cout << ans << endl;
    return 0;
}