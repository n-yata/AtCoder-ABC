#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int h,n;
    cin >> h >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    rep(i,n) h -= a[i];
    if(h <= 0) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}