#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    int n,q;
    cin >> n >> q;
    map<int,vector<int>> mp;
    rep(i,n){
        int a;
        cin >> a;
        mp[a].push_back(i+1);
    }
    rep(qi,q){
        int x,k;
        cin >> x >> k;
        vector<int>& p = mp[x];
        if(p.size() < k) cout << -1 << endl;
        else cout << p[k-1] << endl;
    }
    return 0;
}