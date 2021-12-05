#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define all(x) (x).begin(),(x).end()
using ll = long long;

template<class t> inline bool chmax(t& a, t b) { if (a < b) { a = b; return 1; } return 0; }
template<class t> inline bool chmin(t& a, t b) { if (a > b) { a = b; return 1; } return 0; }

const ll inf = 1ll<<60;
const ll mod = 1'000'000'007;

int main() {
  int n;
  cin >> n;
  vector<string> s(n), t(n);
  rep(i,n) cin >> s[i];
  rep(i,n) cin >> t[i];
 
  auto rot = [&](vector<string> a) {
    vector<string> res(n, string(n, '.'));
    rep(i,n)rep(j,n) res[j][n-1-i] = a[i][j];
    return res;
  };
 
  auto normalize = [&](vector<string> a) {
    int li = n, lj = n;
    rep(i,n)rep(j,n) if (a[i][j] == '#') {
      li = min(li, i);
      lj = min(lj, j);
    }
    vector<string> res(n, string(n, '.'));
    rep(i,n)rep(j,n) if (a[i][j] == '#') {
      res[i-li][j-lj] = '#';
    }
    return res;
  };
  auto same = [&](vector<string> a, vector<string> b) {
    return normalize(a) == normalize(b);
  };
  
  rep(ri,4) {
    if (same(s, t)) {
      cout << "Yes" << endl;
      return 0;
    }
    t = rot(t);
  }
  cout << "No" << endl;
  return 0;
}