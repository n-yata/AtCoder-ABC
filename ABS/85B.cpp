#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<int> d(n);
    rep(i,n) cin >> d[i];
    sort(d.begin(), d.end(), greater<>());
    int ans = 0;
    int tmp = 101;
    rep(i,n){
        if(d[i] >= tmp) continue;
        tmp = d[i];
        ans++;
    }
    cout << ans << endl;
    return 0;
}