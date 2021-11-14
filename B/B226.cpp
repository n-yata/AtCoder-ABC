#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    int n;
    cin >> n;
    set<vector<int>> st;
    rep(i,n){
        int l;
        cin >> l;
        vector<int> v(l);
        for(auto& x : v) cin >> x;
        st.insert(v);
    }
    cout << st.size() << endl;
    return 0;
}