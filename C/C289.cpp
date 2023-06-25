#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define repn(i,num,n) for (int i = num; i < (n); ++i)
#define PI 3.14159265359
using ll = long long;
using P = pair<int,int>;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main() {
  int n,m;
  cin >> n >> m;
  vector<vector<int>> a(m);
  rep(i,m){
    int c;
    cin >> c;
    a[i].resize(c);
    for(auto& x : a[i]) cin >> x;
  }
  int ans = 0;
  for(int b = 0; b < (1<<m); b++){
    set<int> s;
    for(int i = 0; i < m; i++){
      if((b >> i) & 1){
        for(auto& x : a[i]) s.insert(x);
      }
    }
    ans += (int)s.size() == n;
  }
  cout << ans << endl;
  return 0;
}
