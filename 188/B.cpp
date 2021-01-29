#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    int sum = 0;
    rep(i,n) cin >> a[i];
    rep(i,n) cin >> b[i];
    rep(i,n) sum += a[i]*b[i];
    if(sum == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}