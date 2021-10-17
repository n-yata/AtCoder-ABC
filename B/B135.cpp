#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<int> p(n);
    rep(i,n) cin >> p[i];
    int cnt = 0;
    for(int i = 1; i <= n; i++) if(p[i-1] != i) cnt++;
    if(cnt > 2) cout << "NO" << endl;
    else cout << "YES" << endl;
    return 0;
}