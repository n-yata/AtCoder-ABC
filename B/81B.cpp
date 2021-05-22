#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    int ans = 0;
    bool flg = false;
    while(1){
        rep(i,n) if(a[i]%2 != 0) flg = true;
        if(flg) break;
        ans++;
        rep(i,n) a[i] /= 2;
    }
    cout << ans << endl;
    return 0;
}