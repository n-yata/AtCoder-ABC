#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class t> inline bool chmax(t& a, t b) { if (a < b) { a = b; return 1; } return 0; }
template<class t> inline bool chmin(t& a, t b) { if (a > b) { a = b; return 1; } return 0; }

const ll inf = 1ll<<60;
const ll mod = 1'000'000'007;

int main(){
    int n;
    cin >> n;
    vector<pair<ll,ll>> p(n);
    for(auto &nx : p) cin >> nx.first >> nx.second;
    int res = 0;
    rep(i,n)for(int j = i+1; j < n; j++){
        for(int k = j+1; k < n; k++){
            if((p[j].first-p[i].first)*(p[k].second-p[i].second)-(p[k].first-p[i].first)*(p[j].second-p[i].second) != 0) res++;
        }
    }
    cout << res << endl; 
    return 0;
}