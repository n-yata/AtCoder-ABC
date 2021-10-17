#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<int> h(n);
    rep(i,n) cin >> h[i];
    int cnt = 0;
    int maxN = 0;
    rep(i,n){
        maxN = max(h[i], maxN);
        if(maxN > h[i]) continue;
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}