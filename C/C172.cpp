#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

// 尺取り法
int main(){
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n), b(m);
    rep(i,n) cin >> a[i];
    rep(i,m) cin >> b[i];

    ll t = 0;
    // m冊全部読んだことにする
    rep(i,m) t += b[i];

    int j = m;
    int ans = 0;
    // n冊から何冊読むか0からn冊
    rep(i,n+1){
        while(j > 0 && t > k){
            --j;
            t -= b[j];
        }
        if(t > k) break;
        ans = max(ans, i+j);
        if(i == n) break;
        // Aから1冊読んでることにする
        t += a[i];
    }
    cout << ans << endl;
    return 0;
}