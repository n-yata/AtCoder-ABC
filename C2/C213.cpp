#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    int h,w,n;
    cin >> h >> w >> n;
    vector<int> a(n),b(n);
    rep(i,n) cin >> a[i] >> b[i];
    vector<int> ys;
    rep(i,n) ys.push_back(a[i]);
    sort(ys.begin(),ys.end());
    ys.erase(unique(ys.begin(),ys.end()),ys.end());
    rep(i,n) a[i] = lower_bound(ys.begin(),ys.end(),a[i])-ys.begin();

    vector<int> xs;
    rep(i,n) xs.push_back(b[i]);
    sort(xs.begin(),xs.end());
    xs.erase(unique(xs.begin(),xs.end()),xs.end());
    rep(i,n) b[i] = lower_bound(xs.begin(),xs.end(),b[i])-xs.begin();
    rep(i,n) cout << a[i]+1 << " " << b[i]+1 << endl;
    return 0;
}