#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define all(x) (x).begin(),(x).end()
using ll = long long;

template<class t> inline bool chmax(t& a, t b) { if (a < b) { a = b; return 1; } return 0; }
template<class t> inline bool chmin(t& a, t b) { if (a > b) { a = b; return 1; } return 0; }

const ll inf = 1ll<<60;
const ll mod = 1'000'000'007;

int H,W,N,A[101010],B[101010];

int main(){
    cin >> H >> W >> N;
    rep(i,N) cin >> A[i] >> B[i];

    vector<int> ys;
    rep(i,N) ys.push_back(A[i]);
    sort(ys.begin(),ys.end());
    ys.erase(unique(ys.begin(),ys.end()),ys.end());
    rep(i,N) A[i] = lower_bound(ys.begin(),ys.end(), A[i])-ys.begin();

    vector<int> xs;
    rep(i,N) xs.push_back(B[i]);
    sort(xs.begin(),xs.end());
    xs.erase(unique(xs.begin(),xs.end()),xs.end());
    rep(i,N) B[i] = lower_bound(xs.begin(),xs.end(),B[i])-xs.begin();
    rep(i,N) cout << A[i]+1 << " " << B[i]+1 << endl;
    return 0;
}