#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

/**
 * Ringo's Favorite Numbers 2
 * */
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    // 分布を保持
    vector<int> cnt(200);
    // 分布を入れる
    rep(i,n) cnt[a[i]%200]++;
    ll ans = 0;
    // nC2通りをansにカウント
    rep(i,200) ans += (ll)cnt[i]*(cnt[i]-1)/2;
    cout << ans << endl;
    return 0;
}