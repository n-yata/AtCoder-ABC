#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
  ll n;
  cin >> n;
  set<ll> s;
  for(ll a = 2; a*a <= n; a++){
    ll x = a*a;
    while(x <= n){
      s.insert(x);
      x *= a;
    }
  }
  cout << n-s.size() << endl;
  return 0;
}