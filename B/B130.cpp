#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n,x;
    cin >> n >> x;
    vector<int> d(n+1);
    d[0] = 0;
    for(int i = 0; i < n; i++){
        int l;
        cin >> l;
        d[i+1] = d[i]+l;
    }
    int ans = 0;
    rep(i,n+1){
        if(d[i] <= x) ans++;
    }
    cout << ans << endl;
    return 0;
}