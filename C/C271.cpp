#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define repn(i,num,n) for (int i = num; i < (n); ++i)
#define PI 3.14159265359
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n)cin >> a[i];
    unordered_set<int> st;
    rep(i,n) st.insert(a[i]);
    int ans = 0, s = 0;
    for(int i = 1;; i++){
        if(st.count(i)) s += 1;
        else s += 2;
        if(s > n) break;
         ans = i;
    }
    cout << ans << endl;
    return 0;
}