#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    // 2のn乗を超えない値で初期化
    int ans = 1<<30;
    // シフト演算子を使用、2のn乗を表現
    rep(s, 1<<(n-1)){
        int now = 0;
        int o = 0;
        rep(i,n){
            // ビットOR
            o |= a[i];
            // sのi桁目が1ならば
            if(s>>i&1){
                // ビットXOR
                now ^= o;
                o = 0;
            }
        }
        now ^= o;
        ans = min(ans, now);
    }
    cout << ans << endl;
    return 0;
}