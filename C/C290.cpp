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
  int n,k;
  cin >> n >> k;
  set<int> st;
  rep(i,n){
    int a;
    cin >> a;
    st.insert(a);
  }
  rep(i,k){
    if(st.find(i) == st.end()){
      cout << i << endl;
      return 0;
    }
  }
  cout << k << endl;
  return 0;
}
