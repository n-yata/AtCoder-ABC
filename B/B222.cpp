#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n,p;
    cin >> n >> p;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    int cnt = 0;
    rep(i,n) if(p > a[i]) cnt++;
    cout << cnt << endl;
    return 0;
}